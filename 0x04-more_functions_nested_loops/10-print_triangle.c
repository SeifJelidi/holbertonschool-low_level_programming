#include "holberton.h"

/**
  * print_triangle - prints triangle
  *@size: int type variable
  * Return: 0
  */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			z = size - x;
			for (y = 1; y <= size; y++)
			{
				if (y < z)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
