#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - takes 1 string parameter
* Description: returns a pointer which contains a copy of the string
* @str: The string to print
* Return: a pointer to the duplicated string or NULL if insufficient
 */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *ch;

	if (str == '\0')
	{
		return ('\0');
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		len++;
	}
	ch = malloc(sizeof(char) * len + 1);
	if (ch == '\0')
	{
		return ('\0');
	}
	else
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
			ch[i] = str[i];
		}
	}
	ch[i] = '\0';
	return (ch);
}
