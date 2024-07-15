#include "main.h"
/**
 * _printf - Prints formated values
 * @format: String composed of zero or more directives (example: %i)
 * Return: Always 0 Success
 */
int _printf(const char *format, ...)
{
	int i, v, z, iph, fcounter = 0, bmemory = 0, bmemorytotal = 0;
	va_list ap;
	char farr[], char *str, char *sph, char cph;
	char **params;

	/* Contamos la cantidad de parametros que hay */
	for (i = 0; format[i] != '\0'; i++)
	{ /* Cuando encontramos un % paramos */
		if (format[i] == '%')
		{	/* Preguntamos que hay en la posicion siguiente */
			switch (format[i + 1])
			{
				case 'c':
				case 's':
				case 'd':
				case 'i':
					fcounter++; /* Aumentamos fcounter */
					break;
			}
		}
	}
	if (fcounter > 0)
	{
		/* Asignamos espacio en memoria para Array de formateadores */
		farr = malloc(sizeof(char) * fcounter);
		if (farr == NULL) /* Manejamos fallo de Malloc */
			return (NULL);
		/* Asignamos formateadores dentro de un Array */
		v = 0;
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				farr[v] = format[i + 1];
				v++;
			}
		}
		/* Recorremos los parametros y contamos los bytes que ocupan cada uno como String */
		va_start(ap, format);
		v = 0;
		while (v < fcounter)
		{
			switch (farr[v])
			{
				case 'c':
					bmemory += sizeof(va_arg(ap, int) + 1);
					break;
				case 's':
					bmemory += sizeof(va_arg(ap, char *));
					break;
				case 'd':
				case 'i':
					bmemory += sizeof((va_arg(ap, int) / 4));
					break;
			}
			v++;
		}
		/* Asignamos espacio en memoria para el Array de punteros */
		params = malloc(sizeof(char) * bmemory);
		if (params == NULL)
		{
			free(farr);
			return (NULL);
		}
		va_end(ap, format);
		/* Recorremos los parametros una vez mas, para convertirlos en Strings */
		va_start(ap, format);
		v = 0;
		while (v < fcounter)
		{
			switch(farr[v])
			{
				case 'c':
					cph = va_arg(ap, int);
					params[v] = char_to_str(cph); /* Char to String */
					break;
				case 's':
					sph = va_arg(ap, char *);
					params[v] = sph;
					break;
				case 'd':
				case 'i':
					iph = va_arg(ap, int);
					params[v] = funct2(iph); /* Int to String */
					break;
			}
			v++;
		}
		va_end(ap, format);
		/* Calculamos memoria total para el String a imprimir */
		bmemorytotal = (length(format) - (fcounter * 2) + bmemory);
		/* Asignamos la memoria del String a imprimir */
		str = malloc(sizeof(char) * bmemorytotal);
		if (str == NULL)
		{
			free(farr);
			free(params);
			return (NULL);
		}
		/* Armamos un nuevo String con todos los parametros dentro */
		v = 0;
		i = 0;
		z = 0;
		while (i < bmemorytotal)
		{
			if (format[z] == '%')
			{
				while (params[v] != '\0')
				{
					str[i] = params[v];
					i++;
					v++;
				}
				v = 0;
				z++;
			} else
			{
				str[i] = format[z];
			}
			i++;
			z++;
		}
		/* Imprimimos */
		write(str, bmemorytotal);
		return (0);
	} /* Cierra el if fcounter > 0 */
	/* Si no tiene formateadores, imprimimos tal cual */
	write(format, length(format) + 1);
	return (0);
}
