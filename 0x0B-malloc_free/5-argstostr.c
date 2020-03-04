#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - contatenates two stringss
 *@dest: char pointer type variable
 *@src: char pointer type variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (k = i ; k < i + j ; k++)
	{
		dest[k] = src[a];
		a++;
	}
	return (dest);
}

/**
 * argstostr - takes int and pointer to array 2d parameters
 * Description - concatenates all the arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len = 0;
	char *ch;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < ac ; i++)
			for (j = 0 ; av[i][j] != '\0' ; j++)
				len++;
		ch = malloc(sizeof(char) * (len + 1));
		for (i = 0 ; i < ac ; i++)
		{
			ch = _strcat(ch, av[i]);
			ch = _strcat(ch, "\n");
			if (ch == NULL)
				return (NULL);
		}
	}
	ch = _strcat(ch, "\n");
	return (ch);
}
