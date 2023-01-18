#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given
 * as parameter on each array element
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
