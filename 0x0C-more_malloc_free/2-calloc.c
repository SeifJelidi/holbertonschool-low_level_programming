#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - takes two unsigned int parameters
 * Description: allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: NULL if nmemb or size is 0 or if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb * size ; i++)
		p[i] = 0;

	return (p);
}
