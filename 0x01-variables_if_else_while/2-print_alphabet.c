#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Print for loop statements
 *
 * Description: using main function
 * this program prints alphabets in lower case
 * Return: 0
 */

int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
