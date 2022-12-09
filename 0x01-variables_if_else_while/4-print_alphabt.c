#include <stdio.h>

/**
 * main - print statements
 *
 * Description: using main function
 * this program prints statements
 * based on if condition and 
 * for loop
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
