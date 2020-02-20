#include "holberton.h"

/**
 * reverse_array - reverses an int array
 *@a: int pointer type variable
 *@n: int variable (bytes)
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0 ; i < n / 2 ; i++)
	{
		aux = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = aux;
	}
}
