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
 * string_nconcat - takes 2 string and an unsigned int parameters
 * Description: concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to concatenate from s2
 * Return: a pointer to the concatenated string or NULL if insufficient
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	unsigned int len2 = 0;
	int i;
	unsigned int j;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != '\0' && s2 != '\0')
	{
		len1 = str_len(s1);
		len2 = str_len(s2);
		if (n < len2)
			len2 = n;
		ch = malloc(sizeof(char) * (len1 + len2) + 1);
		if (ch == '\0')
		{
			return ('\0');
		}
		for (i = 0 ; i < len1 ; i++)
		{
			ch[i] = s1[i];
		}
		for (i = len1, j = 0 ; j < len2 ; i++, j++)
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
