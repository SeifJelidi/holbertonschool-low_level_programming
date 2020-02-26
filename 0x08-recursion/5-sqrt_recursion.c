#include "holberton.h"

/**
 * _sqrt - works with defined prototype variables
 * Description: returns square root of a number
 *@n: int
 *@i: counter
 * Return: int
 */

int _sqrt(int n, int i)
{
	int s;

	s = i * i;

	if (n - s == 0)
	{
		return (i);
	}
	else if (n < s)
	{
		return (-1);
	}
	i++;
	return (_sqrt(n, i));
}

/**
 * _sqrt_recursion - works with defined prototype variables
 * Description: recursive sqrt
 * @n: number to square
 * Return: returns -1 if no natural square, otherwise returns square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, 2));
}
