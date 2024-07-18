#include "main.h"
/**
 * length - Returns the length of a string
 * @str: String
 * Return: Length (Int)
 */
int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}
/**
 * int_to_str - Converts an int into a String
 * @num: Integer
 * Return: String
 */
char *int_to_str(int num)
{
	char *str, *ptr;
	int number = num, counter = 0, divider = 1, v = 0;

	/* Cambiamos el signo si es negativo */
	if (num < 0)
		counter++;
	/* Contamos la cantidad de numeros que tiene */
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	/* Asignamos espacio en memoria (Teniendo en cuenta signo - y '\0' */
	str = malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return (NULL);
	/* Definimos un puntero ptr como puntero de inicio */
	ptr = str;
	if (number == 0)
	{
		*str = '0';
		*(str + 1) = '\0';
		return (str);
	}
	/* Si es negativo, ponemos el primer caracter el signo - */
	if (number < 0)
	{
		*str = '-';
		str++; /* Avanzamos al siguiente espacio en memoria */
		counter--; /* Counter pasa a ser Cant. de Num. */
		number = -number; /* Valor absoluto a Num */
	}
	/* Dividimos segun la cant de num x10 para conseguir el primer numero */
	while (counter > 0)
	{
		for (v = 1; v < counter; v++)
			divider *= 10;
		*str = (number / divider) + '0'; /* Asignamos al String */
		str++; /* Nos vemos al sig. espacio en memoria */
		number %= divider; /* Preparamos number con el numero restante */
		counter--; /* La cant. de num del siguiente numero es 1 menor */
		divider = 1;
	}
	*str = '\0';
	return (ptr);
}
