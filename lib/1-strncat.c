#include "holberton.h"

/**
 * _strncat - concatenates two strings with n bytes
 *@dest: char pointer type variable
 *@src: char pointer type variable
 *@n: int type variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
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

	for (k = i ; (k < i + j) && (a < n) ; k++)
	{
		dest[k] = src[a];
		a++;
	}
	return (dest);
}

