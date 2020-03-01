#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes two arguments
 * Description: adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int type
 */

int main(int argc, char *argv[])
{

	int i;
	int j;
	int s = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			s = s + atoi(argv[i]);
		}
	}
	printf("%d\n", s);
	return (0);
}
