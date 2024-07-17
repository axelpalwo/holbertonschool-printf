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
char *int_to_unsigned(unsigned int num)
{
	unsigned int number, numph;
       	int counter, divider = 1, v;
	char *str, *ptr;

	number = num;
	/* Guardamos valor original de number */
	numph = number;
	/* Contamos cantidad de digitos del numero */
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	/* Asignamos espacio en memoria */
	str = malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return (NULL);
	ptr = str;
	/* Bajamos cada numero y lo convertimos en caracter */
	while (counter > 0)
	{
		for (v = 1; v < counter; v++)
			divider *= 10;
		*str = (numph / divider) + '0';
		str++;
		numph %= divider; /* Nos movemos al siguiente numero */
		counter--;
		divider = 1;
	}
	*str = '\0';
	return (ptr);
}

