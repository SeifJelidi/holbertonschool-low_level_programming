#include "holberton.h"

/**
 * _strlen - give the lenght of a string
 *@s: int pointer type variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);

}
