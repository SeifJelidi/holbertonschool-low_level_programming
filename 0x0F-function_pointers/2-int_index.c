#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - takes int array, its size and a function
 * Description - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the compare function
 * Return: index of int if found or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
