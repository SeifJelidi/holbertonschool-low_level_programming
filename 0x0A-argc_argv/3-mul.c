#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes two arguments
 * Description: print the result of the multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
