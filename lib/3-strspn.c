#include "holberton.h"
#include <stdio.h>

/**
  * _strspn - works with defined prototype variables
  * Description: locates a character in a string
  *@s: char pointer type variable
  *@accept: char type variable
  * Return: number of bytes in the initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (i);
}
