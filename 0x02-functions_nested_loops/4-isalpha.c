#include "holberton.h"

/**
 *0 _isalpha - Work with prototype defined variables
 * Return 1 if c is a letter - lowercase or uppercase
 * @c: is a int type variable
 * Return: 0 if not is a letter
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
