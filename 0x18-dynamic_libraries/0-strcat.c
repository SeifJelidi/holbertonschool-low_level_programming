#include "holberton.h"

/**
 * _strcat - contatenates two stringss
 *@dest: char pointer type variable
 *@src: char pointer type variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (k = i ; k < i + j ; k++)
	{
		dest[k] = src[a];
		a++;
	}
	return (dest);
}
