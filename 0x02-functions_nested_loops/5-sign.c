#include "holberton.h"

/**
* print_sign works with prototype variable - Short description * @n: is a int type variable
* Return: 1 if is > 0, 0 if is = 0 and -1 if is < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
