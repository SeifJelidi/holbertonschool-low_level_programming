#include <stdio.h>
/**
 * main - prints the sum of Fibonacci sequence whose values
 * not exceed 4000000
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int c;
	long int s;

	s = a + b;
	for (i = 0; i <= 29; i++)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			s = s + c;
		}
		a = b;
		b = c;

	}
	printf("%li", s - 1);
	printf("\n");
	return (0);
}
