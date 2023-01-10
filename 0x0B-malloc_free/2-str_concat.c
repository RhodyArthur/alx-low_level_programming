#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: array1
 * @s2: array2
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x, y;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}

	concat = malloc(i + j + 1);

	if (concat == 0)
	{
		return (0);
	}

	for (x = 0; x < i; x++)
	{
		*(concat + x) = *(s1 + x);
	}
	for (x = 0, y = i; x < j; y++, x++)
	{
		*(concat + y) = *(s2 + x);
	}
	*(concat + y) = '\0';
	return (concat);
}
