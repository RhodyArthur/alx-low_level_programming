#include "main.h"

/**
 * prime_i - function
 * @i: number
 * @j: number1
 * Description: prime number
 * Return: n
 */

int is_prime_number(int n)
{
	if (i <= 1 || (i != j && i % j == 0))
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	return (prime_i(i, j + 1));
}

/**
 * is_prime_number - function
 * @n: number
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_i(n, 2));
}
