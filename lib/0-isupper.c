#include "holberton.h"

/**
  * _isupper - works with defined prototype variables
  * Description: checks for uppercase character
  *@c: char type variable
  * Return: 1 if c is uppercase, 0 if not.
   */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
