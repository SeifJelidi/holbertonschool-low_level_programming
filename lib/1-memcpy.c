#include "holberton.h"

/**
 * _memcpy - works with defined prototype variables
 * Description: fills memory with a constant byte
 *@dest: char pointer type variable
 *@src: char pointer type variable
 *@n: int type variable
 * Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
