#include "main.h"
/**
 * _printf - Prints formated values
 * @format: String composed of zero or more directives (example: %i)
 * Return: 0 Success / -1 Failure (Null)
 */
int _printf(const char *format, ...)
{
	int i, v, z, iph, len, fcounter = 0, bmemory = 0, bmemorytotal = 0;
	va_list ap;
	char *farr, *str, *sph;
	char cph;
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
	printf("fcounter es: %i\n", fcounter);
	if (fcounter > 0)
	{
		/* Asignamos espacio en memoria para el Array de Formateadores */
		farr = malloc(sizeof(char) * fcounter);
		if (farr == NULL)
			return (-1);
		/* Asignamos formateadores dentro de un Array */
		v = 0;
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				farr[v] = format[i + 1];
				printf("Armando los formateadores, ahora va: %c\n", farr[v]);
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
					iph = va_arg(ap, int);
					if (iph)
						printf("Reconozco iph\n");
					else

					break;
			}
			v++;
		}
		printf("La memoria del Array de parametros es: %i\n", bmemory);
		/* Asignamos espacio en memoria para el Array de punteros */
		params = malloc(sizeof(char) * bmemory);
		if (params == NULL)
		{
			free(farr);
			return (-1);
		}
		va_end(ap);
		/* Recorremos los parametros una vez mas, para convertirlos en Strings */
		va_start(ap, format);
		v = 0;
		while (v < fcounter)
		{
			switch(farr[v])
			{
				case 'c':
					cph = va_arg(ap, int);
					*params = char_to_str(cph); /* Char to String */
					break;
				case 's':
					sph = va_arg(ap, char *);
					*params = sph;
					break;
				case 'd':
				case 'i':
					iph = va_arg(ap, int);
					*params = int_to_str(iph); /* Int to String */
					break;
			}
			v++;
			printf("El parametro actual es: %s\n", *params);
			params++;
		}
		va_end(ap);
		/* Calculamos memoria total para el String a imprimir */
		bmemorytotal = (length(format) - (fcounter * 2) + bmemory);
		/* Asignamos la memoria del String a imprimir */
		str = malloc(sizeof(char) * bmemorytotal);
		if (str == NULL)
		{
			free(farr);
			free(params);
			return (-1);
		}
		/* Armamos un nuevo String con todos los parametros dentro */
		i = 0;
		z = 0;
		while (i < bmemorytotal)
		{
			if (format[z] == '%')
			{
				while (**params != '\0')
				{
					str[i] = **params;
					i++;
					params++;
				}
				z++;
			} else
			{
				str[i] = format[z];
			}
			i++;
			z++;
		}
		/* Imprimimos */
		write(1, str, bmemorytotal);
		return (bmemorytotal);
	} /* Cierra el if fcounter > 0 */
	/* Si no tiene formateadores, imprimimos tal cual */
	write(1, format, length(format) + 1);
	return (length(format) + 1);
}
