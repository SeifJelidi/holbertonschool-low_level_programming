#include "variadic_functions.h"
/**
* print_strings - print strings with variadic functions
* Description: function that prints strings
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *currString;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0 ; i < n ; i++)
	{
		currString = va_arg(list, char*);
		if (currString == NULL)
			printf("(nil)");
		else
			printf("%s", currString);
		if (i + 1 < n)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
