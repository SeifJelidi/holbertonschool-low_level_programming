#include "holberton.h"

/**
 * _strlen_recursion - works with defined prototype variables
 * Description: returns the length of a string
 *@s: char pointer type variable
 * Return: len of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
