#include "holberton.h"

/**
 * set_string - works with defined prototype variables
 * Description: that sets the value of a pointer to a char
 *@s: char pointer to pointer type variable
 *@to: char pointer type variable
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
