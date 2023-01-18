#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: number of array elements
 * @size: array size
 * @cmp: function pointer
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp[i] != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
