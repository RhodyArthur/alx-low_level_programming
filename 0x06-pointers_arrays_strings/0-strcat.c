#include "main.h"

/**
 * _strcat - function
 * @dest: string 1
 * @src: string 2
 * Description: concatenate two strings
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	while (n <= j)
	{
		dest[i] = src[n];
		n++;
		i++;
	}

	return (dest);
}
