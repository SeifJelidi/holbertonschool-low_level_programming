#include "holberton.h"

/**
 * _prime - works with defined prototype variables
 * Description : returns prime number
 * @n: number to check for primality
 * @i: counter for prime check value
 * Return: int type
 */

int _prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i > (n / 2))
	{
		return (1);
	}
	i++;
	return (_prime(n, i));
}

/**
 * is_prime_number - works with defined prototype variables
 * Description : determines whether a number is a prime number
 * @n: number to check
 * Return: returns 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 0 || n % 2 == 0 || n == 1)
	{
		return (0);
	}
	return (_prime(n, 3));
}
