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
	int found = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			found = 1;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					found = 0;
					break;
				}
				j++;
			}
		}
		if (found == 1)
		{
			break;
		}
		i++;
	}
	if (found == 1)
	{
		return (haystack + i);
	}
	return (NULL);
}
