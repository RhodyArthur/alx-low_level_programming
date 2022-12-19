#include "main.h"

/**
 * print_array - function
 * @a: array
 * @n: input variable
 * Description: prints array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0 )
	{
		for (i = 0; n > i; i++)
		{
			if ( i != n -1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
