#include "main.h"
/**
 * _printf - Prints formated text
 * @format: String with zero or more directives
 * Return: Number of bytes printed
 */
int _printf(const char *format, ...)
{
	int tbytes = 0, i;
	const char *ptr = format;
	char cph, *sph;
	va_list ap;

	va_start(ap, format);
	for (i = 0; ptr[i] != '\0' && ptr != NULL; i++)
	{
		if (ptr[i] == '%')
		{
			if (ptr[i + 1] == '\0')
				return (-1);
			switch (ptr[i + 1])
			{
				case 'c':
					cph = va_arg(ap, int);
					write(1, &cph, 1);
					break;
				case 's':
					sph = va_arg(ap, char *);
					if (!sph)
						sph = "(null)";
					write(1, sph, length(sph));
					tbytes += length(sph);
					break;
				case '%':
					cph = '%';
					write(1, &cph, 1);
					break;
				default:
					cph = '%';
					write(1, &cph, 1);
					break;
			}
			i++;
		} else
			write(1, &ptr[i], 1);
	}
	tbytes += i;
	return (tbytes);
}
