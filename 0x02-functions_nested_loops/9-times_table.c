#include "main.h"

/**
 * times_table - entry point
 *
 * Description: prints times table
 * Return: 0
 */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j < 10; j++)
		{
			m = (i * j);
			if ((m / 10) > 0)
			{
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

