#include "holberton.h"

/**
 * _isdigit - works with defined prototype variables
 * Description: checks for a digit (0 through 9)
 *@c: int type variable
 * Return: 1 if c is a digit, 0 if not.
 */

int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
			else
		{
			return (0);
		}
}
