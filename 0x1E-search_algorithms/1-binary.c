#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	int m;
	unsigned int i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array:");
		for (i = start ; i <= end ; i++)
			printf(" %i,", array[i]);
		printf("\n");
		m = start + (end - start) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			start = m + 1;
		else
			end = m - 1;
	}
	return (-1);
}
