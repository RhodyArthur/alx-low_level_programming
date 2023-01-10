#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2
 * dimentional array of strings
 * @width: array1
 * @height: array2
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **s, i, j, k;

	if  (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
