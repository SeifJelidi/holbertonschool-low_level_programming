#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 *@a: int pointer type variable
 *@b: int pointer type variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)

{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
