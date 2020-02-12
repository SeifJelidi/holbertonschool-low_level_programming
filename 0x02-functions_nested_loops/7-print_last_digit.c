#include "holberton.h"

/**
* print_last_digit - works with defined prototype variables
* Print last digit of a number
* @h : is a int type variable
* Return: h as a last digit of a number
*/

int print_last_digit(int h)
{
	int a;

	a = h % 10;
	if (a < 0)
	{
		a = (a * -1);
	}
	_putchar(a + '0');
	return (a);
}
