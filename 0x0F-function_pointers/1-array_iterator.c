#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - takes an int array, its size and a function parameters
 * Description: prints a name using function pointer.
 * @array: array to print
 * @size: size of the array
 * @action: pointer to the function that will print the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
