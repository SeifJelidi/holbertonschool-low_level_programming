#include "holberton.h"

/**
 * factorial - works with defined prototype variables
 * Description: returns factorial of n
 *@n: int type variable
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
