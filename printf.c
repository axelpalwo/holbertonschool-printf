#include "main.h"
/**
 * _printf - Prints formated text
 * @format: String with zero or more directives
 * Return: Number of bytes printed
 */
int _printf(const char *format, ...)
{
	int iph, tbytes = 0;
	const char *ptr = format, *sph;
	char cph;
	va_list ap;

	va_start(ap, format);
	for ( ; *ptr != '\0' && ptr != NULL; ptr++)
	{
		if (*ptr == '%' && *ptr + 1 != '\0')
		{
			switch (*(ptr + 1))
			{
				case 'c':
					cph = va_arg(ap, int);
					write(1, &cph, 1);
					tbytes++;
					break;
				case 's':
					sph = va_arg(ap, char *);
					if (!sph)
						sph = "(null)";
					write(1, sph, length(sph));
					tbytes += length(sph);
					break;
				case 'd':
				case 'i':
					iph = va_arg(ap, int);
					sph = int_to_str(iph);
					write(1, sph, length(sph));
					tbytes += length(sph);
					break;
				case '%':
					cph = '%';
					write(1, &cph, 1);
					tbytes++;
					break;
				case '\0':
					break;
				default:
					cph = '%';
					write(1, &cph, 1);
					tbytes++;
					ptr--;
					break;
			}
			ptr++;
		} else
		{
			write(1, ptr, 1);
			tbytes++;
		}
	}
	va_end(ap);
	return (tbytes);
}
