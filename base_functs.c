#include "main.h"
/**
 * int_to_base - Converts an int into specified base string
 * @num: Number to convert
 * Return: String
 */
char *int_to_base(unsigned int num, int base)
{
	unsigned int counter = 0, number = num;
	char *str, *ptr;

	while (num != 0)
	{
		num /= base;
		counter++;
	}
	/* Reservamos espacio en memoria para representar el num en la base */
	str = malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return (NULL);
	/* Apuntamos Ptr a la primera pos. de Str*/
	ptr = str;
	/* Vamos a la ultima pos. y asignamos null */
	str[counter + 1] = '\0';
	counter--;
	/* Asignamos cada numero al String con los modulos */
	while (number != 0)
	{
		str[counter] = (number % base) + '0';
		number /= base;
		counter--;
	}
	return (ptr);
}

