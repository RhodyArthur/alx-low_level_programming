#include "main.h"

/**
 * rev_string - function reverse a string
 * @s: pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0, a = 0, b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i > a)
	{
		b = s[i];
		s[i--] = s[a];
		s[a++] = b;
	}
}
