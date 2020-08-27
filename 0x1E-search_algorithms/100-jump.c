#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[start] < value && end < size)
	{
		if (array[end] == value)
			break;
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		start = end;
		end += sqrt(size);
	}

	printf("Value found between indexes [%i] and [%i]\n", start, end);

	while (start <= end && start < size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start += 1;
	}
	return (-1);
}
