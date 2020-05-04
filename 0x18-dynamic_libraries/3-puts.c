#include "holberton.h"
/**
 * _puts - printf a string to stdout
 *@str: char pointer type variable
 * Return: Always 0.
 */
void _puts(char *s)
{
	while (*s != 0)
{
	_putchar(*s);
	s++;
}
	_putchar('\n');
}
