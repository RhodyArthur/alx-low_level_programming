#include "main.h"

/**
 * _islower - entry point
 *
 * Description: this program checks
 * if a character is lower
 * Return 1 if lower
 * otherwise 0
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
