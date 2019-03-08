#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _mystrlen - counts the length of a string
 *
 * @s: pointer to a string
 *
 * Description: counts the length of a string
 *
 * Return: value
 */
unsigned int _mystrlen(char *s)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: variable
 *
 * Description: function concatenates 2 strings
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, b;
	char *str;
	int len;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	if (n < _mystrlen(s1))
	{
		len = _mystrlen(s1) + n + 1;
	}
	else
	{
		len = _mystrlen(s1) + _mystrlen(s2) + 1;
	}
	str = malloc(len);
	if (str == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * (len));
	for (i = 0; s1[i] != 0; i++)
	{
		str[i] = s1[i];
	}
	for (b = 0; s2[b] != 0 && b < n; b++, i++)
	{
		str[i] = s2[b];
	}
	str[i] = '\0';
	return (str);
}
