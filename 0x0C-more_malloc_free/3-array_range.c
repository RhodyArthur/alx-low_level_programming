#include "main.h"

/**
 * array_range - creates array of integers
 * @min: small number
 * @max: big number
 * Return: array
 */

int *array_range(int min, int max)
{
	int *str, i;

	if (min > max)
	{
		return (NULL);
	}

	str = malloc(sizeof(int) * (max - min + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		*(str + i) = min;
	}
	return (str);
}
