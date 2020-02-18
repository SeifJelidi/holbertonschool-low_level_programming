#include "holberton.h"

/**
 * print_rev - reverse string
 *@s: int pointer type variable
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int ch = 0;
	int c = 0;
	int l;

	while (s[c] != '\0')
	{
		c++;
	}

	l = c;

	for (ch = l - 1; ch >= 0; ch--)
	{
		_putchar(s[ch]);
	}
	_putchar('\n');
}
