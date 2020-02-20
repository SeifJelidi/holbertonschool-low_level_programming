#include "holberton.h"

/**
 * _strncpy - copies a string
 *@dest: char pointer type variable
 *@src: char pointer type variable
 *@n: int type variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}