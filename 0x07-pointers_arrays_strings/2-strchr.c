#include "main.h"

/**
 * _strchr - locates a string
 * @s: buffer
 * @c: buffer2
 * Return: nothing
 */

char *_strstr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
		return (s);
}
