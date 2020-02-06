#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lether;

	for (lether = 'z'; lether >= 'a'; lether--)
	{
		putchar(lether);
	}
	printf("\n");
	return (0);
}
