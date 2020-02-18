#include "holberton.h"

/**
 * rev_string - reverse a string
 *@s: char pointer type variable
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int l;
	int len;
	int c = 0;
	char aux;

	while (s[c] != '\0')
	{
		c++;
	}

	len = c;

	l = len - 1;
	c = 0;

	while (c <= l)
	{
		aux = s[c];
		s[c] = s[l];
		s[l] = aux;
		c++;
		l--;
	}
}

