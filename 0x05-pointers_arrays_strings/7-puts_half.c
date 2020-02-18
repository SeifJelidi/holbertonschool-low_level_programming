#include "holberton.h"

/**
 * puts_half - printf half of a string
 *@str: char pointer type variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	l++;
	for (i = l / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
