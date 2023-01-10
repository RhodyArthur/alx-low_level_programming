#include "main.h"

/**
 * _strncat - function
 * @n: size of character
 * @dest: first string
 * @src: second string
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	while (s <= j)
	{
		if (n > 0)
		{
			dest[i] = src[s];
			s++;
			i++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
