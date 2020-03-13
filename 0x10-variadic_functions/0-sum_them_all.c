#include "variadic_functions.h"
/**
 * sum_them_all - sum of numbers made with variadic function
 * Description: sum of numbers made with variadic function
 * @n: number of parameters
 * Return: 0 or sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0 ; i < n ; i++)
		s += va_arg(list, int);
	va_end(list);
	return (s);
}
