#include "main.h"

/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints _putchar
 * Return: 0
 */

int main(void)
{
	char *pt = "_putchar";

	while (*pt)
	{
		_putchar(*pt);
		pt++;
	}
	_putchar('\n');
	return (0);
}
