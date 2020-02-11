#include "holberton.h"

/**
 * print_alphabet - print alphabet lowercase x10
 *
 * Description: call print_alphabet() x10
 * Return: sucessful alphabet
 */

void print_alphabet_x10(void)
{
char i;
int j = 0;
for (j = 1; j <= 10; j++)
{
i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
