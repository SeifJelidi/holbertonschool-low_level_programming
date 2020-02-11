#include "holberton.h"

/**
 * largest number  returns the largest of 3 numbers
 * a: first number
 * b: second number
 * c: third number
 * l: largest number
 * Return: l
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a > b && a > c)
	{
		l = a;
	}
	else if (b > c)
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}
