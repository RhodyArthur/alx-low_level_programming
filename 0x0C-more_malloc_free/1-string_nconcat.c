#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
		return (i);
	}

/**
 * string_noncat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: 0
 */

char *string_noncat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned x, y, z;

	if (s1 == NULL)
		s1="";
	if (s2 == NULL)
		s2="";

	y = _strlen(s1);
	x = _strlen(s2);
	if (n < x)
		x = n;

	str = malloc(y + x + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < y; z++)
	{
		*(str + z) = *(s1 + z);
	}

	for ( z = 0;  z < x; z++)
	{
		*(str + (z + x)) = *(s2 + z);
	}
	*(str + (z + x)) = '\0';
	return (str);
}



