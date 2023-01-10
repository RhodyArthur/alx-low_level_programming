#include "main.h"

/**
 * _strncpy - function
 * @n: size of character
 * @dest: first string
 * @src: second string
 * Description: copy a string
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
