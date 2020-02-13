#include "holberton.h"

/**
  * _isupper - checks if a letter is uppercase
  * Description: checks for uppercase character
  *@c: char type variable
  * Return: 1 if c is uppercase, 0 if not.
   */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);								}
}
