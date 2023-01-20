#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @n: number of arguments
 * @separator: character that separates numbers
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (n == i + 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
