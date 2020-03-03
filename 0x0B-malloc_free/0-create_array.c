#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*create_array - creates a array of chars and initializes it with a char.
*@size: unsigned int, size of array of chars
*@c: char type variable. An specific char to initialize array
*Return: Null if size = 0 or a pointer to the array
*/

char *create_array(unsigned int size, char c)

{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(c));

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
	}
