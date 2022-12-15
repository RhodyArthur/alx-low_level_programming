#include "main.h"

/**
 * more_numbers - function
 * Description: print 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
