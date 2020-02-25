#include "holberton.h"

/**
 * _strstr - works with defined prototype variables
 * Description: locates a character in a string
 *@haystack: char pointer type variable
 *@needle: char type variable
 * Return: Returns a pointer or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j]
			    && needle[i + 1] == haystack[j + 1]											&& needle[i + 2] == haystack[j + 2])
			{
				return (haystack + j);
			}
		}
	}
	return (0);
}
