#include "variadic_functions.h"
/**
 * print_all - prints anything
 * Description: prints anything
 * @format: list of arguments types
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int notType;
	char *ch;

	va_start(list, format);
	while (format && format[i])
	{
		notType = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				ch = va_arg(list, char*);
				if (ch == NULL)
					ch = "(nil)";
				printf("%s", ch);
				break;
			default:
				notType = 0;
		}
		if (notType == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
