#include "holberton.h"

/**
 * _memset - works with defined prototype variables
 * Description: fills memory with a constant byte
 *@s: char pointer type variable
 *@b: char type variable
 *@n: int type variable
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
