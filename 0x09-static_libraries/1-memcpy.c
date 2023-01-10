#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @src: first buffer
 * @dest: second buffer
 * @n: size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
