#include "holberton.h"
/**
 * _puts - printf a string to stdout
 *@str: char pointer type variable
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != 0)
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
