#include "holberton.h"

/**
  * more_numbers - works with defined prototype variables
  * prints 10 times the numbers, from 0 to 14
  *
  * Return: 0
  */

void more_numbers(void)
{
	int i = 0;
	int s = 0;

	for (i = 1; i <= 10; i++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s >= 10)
			{
				_putchar(s / 10 + 48);
			}
			_putchar(s % 10 + 48);
		}
		_putchar('\n');
	}
}
