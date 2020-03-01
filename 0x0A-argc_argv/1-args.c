#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*Description: prints the number of arguments passed into it.
*@argc: amount of arguments passed through the program
*@argv: pointer that contains the arrays of the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
	printf("argv[%d] : %s\n", i, argv[i]);
	}
	return (0);
}
