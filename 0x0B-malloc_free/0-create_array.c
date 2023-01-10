#include "main.h"

/**
 * create_array - creates an array and initializes it
 * with a special character
 * @size: array size
 * @c: character
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (0);
	}
	str = malloc(size);

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	*(str + i) = '\0';

	return (str);
}
