#include <stdio.h>

/**
 * main - prints for loop statement
 *
 * Description: using main function
 * this program prints in base16
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
