#include "holberton.h"

/**
* _puts_recursion - works with defined prototype variables
* Description: print a string with recursion
*@s: char pointer type variable
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
										}
	_putchar(*s);
	_puts_recursion(s + 1);
}
