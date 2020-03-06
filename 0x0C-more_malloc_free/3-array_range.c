#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - takes two int parameters
 * Description: creates an array of integers
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *t;
	int i;
	int j;

	if (min > max)
		return (NULL);

	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);

	j = min;
	for (i = 0 ; i < (max - min + 1) ; i++)
	{
		t[i] = j;
		j++;
	}
	return (t);
}

