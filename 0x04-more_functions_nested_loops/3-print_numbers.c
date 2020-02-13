#include "holberton.h"

/**
 * print_numbers - works with defined prototype variables
 * Prints the numbers 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
	_putchar(n + 48);
	}
	_putchar('\n');
}
