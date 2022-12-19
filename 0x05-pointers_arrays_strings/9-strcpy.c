#include "main.h"

/**
 * _strcpy - function copies a pointer to a pointer
 * @dest: array
 * @src: number of array
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
