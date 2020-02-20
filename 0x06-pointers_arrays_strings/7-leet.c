#include "holberton.h"

/**
 *  leet - encodes a string into 1337
 *@s: char pointer type variable
 * Return: s
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
