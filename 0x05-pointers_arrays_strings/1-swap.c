#include "main.h"

/**
 * swap_int - function
 * @a: pointer value
 * @b: pointer value
 * Description: this program swaps 2 integers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
