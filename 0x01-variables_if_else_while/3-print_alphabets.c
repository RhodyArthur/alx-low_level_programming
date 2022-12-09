#include <stdio.h>

/**
 * main - print for loop statements
 *
 * Description: using main function
 * this program prints upper
 * and lower case alphabets
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
