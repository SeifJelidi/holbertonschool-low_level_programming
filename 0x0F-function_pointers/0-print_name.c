#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - takes a string and pointer to function parameters
 * Description: prints a name using function pointer.
 * @name: name to print
 * @f: function that will print the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
