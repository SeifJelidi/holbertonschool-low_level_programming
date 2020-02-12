#include "holberton.h"

/**
* times_table - works with defined prototype variables
* Description: Print 9 times table
*
* Return: 9 times table
*/

void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{

			if (row * col >= 10)
			{
				_putchar(row * col / 10 + 48);
				_putchar(row * col % 10 + 48);
			}
			else if (col != 0)
			{
				_putchar(' ');
				_putchar(row * col + 48);
			}
			else
			{
				_putchar(row * col + 48);
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
