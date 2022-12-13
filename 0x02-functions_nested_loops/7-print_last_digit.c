#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - entry point
 * @i: input character
 * Description: print the last digit
 * of a number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int pld;

	pld = i % 10;

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
