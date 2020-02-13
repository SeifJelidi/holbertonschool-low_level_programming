#include "holberton.h"

/**
 * print_most_numbers - works with defined prototype variables
 * Prints the numbers 0 to 9, and no except 3
 *
 * Return: 0
 */

void print_most_numbers(void)
{
		int n = 0;

		for (n = 0; n <= 9; n++)
		{
			if (n != 2 && n != 4)
		{
				_putchar(n + 48);
		}
	}
		_putchar('\n');
}
