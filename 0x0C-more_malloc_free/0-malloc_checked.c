#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* malloc_checked - takes unsigned int parameter
* Description: allocates memory using malloc
* @b: unsigned int
* Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

