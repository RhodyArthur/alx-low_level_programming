#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the minimum number of coins
 * to make change for any amount
 * of money
 * @argc: argument
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, coins, change = 0, x;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] == '-')
			{
				printf("0\n");
				return (0);
			}
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}

		coins = atoi(argv[i]);
		for (x = 0; x < 5; x++)
		{
			while (coins >= cents[x])
			{
				coins -= cents[x];
				change += 1;
			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
