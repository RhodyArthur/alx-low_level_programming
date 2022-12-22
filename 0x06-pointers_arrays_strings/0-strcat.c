#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: s1
 * @src: s2
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
