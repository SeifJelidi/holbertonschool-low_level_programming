#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - works with defined prototype variables
 * Description: sum of the two diagonals of a square matrix of integers
 *@a: char pointer type variable
 *@size: int type variable
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int s1 = 0;
	int s2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		s1 = s1 + a[(size + 1) * i];
	}
	for (j = 0 ; j < size ; j++)
	{
		s2 = s2 + a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
