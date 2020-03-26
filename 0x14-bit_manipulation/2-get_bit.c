#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * Description: returns the value of a bit at a given index
 * @n: unsigned long int type
 * @index: index of the bit to get
 * Return: value of the bit at the index or -1 if an error ocurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
