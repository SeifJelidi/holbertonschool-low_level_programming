#include <stdio.h>
/**
 * main - prints the first 50 fibonacci number
 *
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int c;

	printf("%li, ", a);
	printf("%li, ", b);
	for (i = 0; i <= 47; i++)
	{
		if (i != 47)
		{
			c = a + b;
			printf("%li, ", c);
			a = b;
			b = c;
		}
		else
		{
			printf("%li", a + b);
		}
	}
	printf("\n");
	return (0);
}
