#include "holberton.h"

/**
  * print_line - prints underscore n times
  *@n: int type variable
  * Return: 0
  */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
