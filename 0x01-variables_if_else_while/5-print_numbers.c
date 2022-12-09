#include <stdio.h>

/**
 * main - print for statement
 *
 * Description: using main function
 * this program prints numbers
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
