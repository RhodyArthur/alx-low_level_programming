#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: num1
 * @b: num2
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: num1
 * @b: num2
 * Return: diff
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: num1
 * @b: num2
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: num1
 * @b: num2
 * Return: ...
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulos
 * @a: num1
 * @b: num2
 * Return: ...
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
