#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - takes two int parameters
 * Description: returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **m;

	if (width <= 0 || height <= 0)
		return ('\0');

	m = malloc(height * sizeof(int *));
	for (i = 0 ; i < height ; i++)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			for (i = i - 1 ; i >= 0 ; i--)
			{
				free(m[i]);
			}
			free(m);
			return (NULL);
		}
	}
	if (m == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			m[i][j] = 0;

	return (m);
}
