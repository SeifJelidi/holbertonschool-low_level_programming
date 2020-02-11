#include "holberton.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Description: print "a to z" using _putchar
 * Return: sucessful alphabet
 */

void print_alphabet(void)
{
char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
