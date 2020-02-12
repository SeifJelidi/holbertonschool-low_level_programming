#include "holberton.h"
i
/**
 * _islower - Works with defined prototype variables
 * Will detect if a letter is lowercase returning 1
 * @c: is char type variable
 * Return: 1 of 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
