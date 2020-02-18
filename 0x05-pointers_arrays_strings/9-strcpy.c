#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type array pointer
 * @src: char type integer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
