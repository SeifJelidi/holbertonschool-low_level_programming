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
		return (NULL);

	m = (int **)malloc(height * sizeof(int *));
	for (i = 0 ; i < height ; i++)
		m[i] = (int *)malloc(width * sizeof(int));
	if (m == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			m[i][j] = 0;

	return (m);
}
