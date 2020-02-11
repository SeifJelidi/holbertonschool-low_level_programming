#include "holberton.h"

/**
 * print_alphabet - it works with defined prototype variables
 *
 * Description: Write program to print "a to z" using _putchar
 * Return: sucessful alphabet
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
