#include "holberton.h"

/**
  * _pow_recursion - works with defined prototype variables
  * Description: value of x raised to the power of y
  *@x: int type variable
  *@y: int type variable
  * Return: return a power of a given number
   */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (0);
}
