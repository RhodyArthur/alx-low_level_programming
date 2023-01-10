#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: command line argument
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	for (i = 0; i < argc; i++)
	{
		if (i + 1 == argc)
		{
			printf("%i\n", i);
		}
	}
	return (0);
}
