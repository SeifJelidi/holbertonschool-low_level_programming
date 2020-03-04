#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - takes pointer to array 2d int and an int parameters
 * Description: frees a 2 dimensional grid
 * @grid: array 2d int
 * @height: height of the array
 *
 * Return: a pointer to an array 2d int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
