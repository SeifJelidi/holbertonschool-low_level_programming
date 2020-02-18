#include "holberton.h"

/**
 * rev_string - reverse a string
 *@s: char pointer type variable
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	char aux;
	int l;
	int len;

	while (s[i] != '\0')
	{
		l++;
	}

	len = l - 1;

	while (c <= len)
	{
		aux = s[c];
		s[c] = s[len];
		s[len] = aux;
		c++;
		len--;
	}
}
