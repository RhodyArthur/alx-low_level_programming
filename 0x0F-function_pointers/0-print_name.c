#include "function_pointers.h"

/**
 * print_name: prints name
 * @name: name of person
 * @f: print name as it is and in uppercase
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
