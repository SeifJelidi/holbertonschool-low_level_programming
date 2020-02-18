#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of int
 * @a: int type array pointer
 * @n: int type integer variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
