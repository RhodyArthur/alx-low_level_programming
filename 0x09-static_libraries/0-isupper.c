#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @c: input character
 * Return: 1 if it is uppercase
 * otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
