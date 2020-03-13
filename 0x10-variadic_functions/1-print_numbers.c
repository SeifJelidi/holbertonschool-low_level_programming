#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * Description: prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(para, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(para, int));
		if (i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(para);
}
