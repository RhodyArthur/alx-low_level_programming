#include "main.h"

/**
 * _islower - entry point
 * @c: input character
 * Description: this program checks
 * if a character is lower
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
