#include "holberton.h"

/**
 * print_alphabeti_x10 - print alphabet lowercase
 *
 * Description: print "a to z" using _putchar
 * Return: sucessful alphabet
 */

void print_alphabet_x10(void)
{
char i;
int j;
	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
