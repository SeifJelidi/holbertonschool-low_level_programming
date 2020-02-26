#include "holberton.h"

/**
 * _print_rev_recursion - works with defined prototype variables
 * Description: prints a string in reverse
 *@s: char pointer type variable
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
