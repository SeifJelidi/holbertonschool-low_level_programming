#include "holberton.h"
#include <stdio.h>

/**
  * _strpbrk - works with defined prototype variables
  * Description: searches a string for any of a set of bytes
  *@s: char pointer type variable
  *@accept: char type variable
  * Return: pointer to the byte in s or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
