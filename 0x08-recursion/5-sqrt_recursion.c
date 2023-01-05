#include "main.h"

/**
 * _sqrt_i - function
 * @i: number
 * @j: root of number
 * Description: returns square root of a number
 * Return: 0
 */

int sqrt_i(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sqrt_i(i, j + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: number
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_i(n, 0));
}
