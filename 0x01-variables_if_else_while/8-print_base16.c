nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	printf("\n");
	return (0);
}
