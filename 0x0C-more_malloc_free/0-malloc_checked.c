#include "main.h"

/**
 * malloc_checked - allocates memory using maloc
 * @b: size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
