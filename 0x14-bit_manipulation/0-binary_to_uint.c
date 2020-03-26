#include "holberton.h"

/**
  * _power - power function
  * Description: return a power b
  * @a: integer type
  * @b: integer type
  * Return: integer typee
  */

unsigned int _power(int a, int b)
{
	unsigned int r = 1;

	while (b != 0)
	{
		r *= a;
		b--;
	}
	return (r);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * Description: converts a binary number to an unsigned int
 * @b: pointing to string of 0 and 1 chars
 * Return: converted number, or 0 if it's NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int p = 0;
	int i, l = 0;
	unsigned int number = 0;


	if (b == NULL)
		return (0);
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		l++;
	}
	l--;
	while (l >= 0)
	{
		if (b[l] == '1')
			number += _power(2, p);
		p++;
		l--;
	}
	return (number);
}
