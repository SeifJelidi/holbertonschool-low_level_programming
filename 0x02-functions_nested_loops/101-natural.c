#include <stdio.h>
/**
 * main -print sum of 5 and 3 integers
 *
 * Return: 0
 */
int main(void)
{
	int fm = 5;
	int tm = 3;
	int s = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % tm == 0 && i % fm == 0)
		{
			s = s + i;
		}
		else if (i % fm == 0)
		{
			s = s + i;
		}
		else if (i % tm == 0)
		{
			s = s + i;
		}
	}
	printf("%d\n", s);
	return (0);
}
