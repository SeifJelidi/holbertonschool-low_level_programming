#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_len - takes 1 string parameters
 * Description: returns the length of a string
 * @s: a type string
 * Return: length of a string
 */

int str_len(char *s)
{
	int len = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - takes 2 string parameters
 * Description: concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string or NULL if insufficient
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;
	char *ch;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	if (s1 != '\0' && s2 != '\0')
	{
		len1 = str_len(s1);
		len2 = str_len(s2);
		ch = malloc(sizeof(char) * (len1 + len2) + 2);
		if (ch == '\0')
		{
			return ('\0');
		}
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			ch[i] = s1[i];
		}
		for (i = len1, j = 0 ; s2[j] != '\0' ; i++, j++)
		{
			ch[i] = s2[j];
		}
		ch[i] = '\0';
	}
	else
	{
		ch = "";
	}
	return (ch);
	free(ch);
}
