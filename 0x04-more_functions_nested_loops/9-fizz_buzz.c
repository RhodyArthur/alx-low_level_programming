#include "main.h"

/**
 * main - entry point
 * Description: prints fizz and buzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
