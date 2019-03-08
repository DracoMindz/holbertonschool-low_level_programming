#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * strlen - counts the length of a string
 *
 * @s: pointer to a string
 *
 * Description: counts the length of a string
 *
 * Return: value
 */
int strlen(char *s)
{
	int x;
	for (x = 0; s[a] != '\0'; x++)
		;
	return (x);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: variable
 *
 * Description: function concatenates two strings
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, i, b;
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
	if (n < strlen(s1))
	{
		len = strlen(s1) + n + 1;
	}
	else
	{
		len = strlen(s1) + strlen(s2) + 1;
	}
	str = malloc(len);
	if (str == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * (a + b));
	for (i = 0; s1[i] !=0; i++)
	{
		str[i] = s1[i];
	}
	for (b = 0; s2[b]; b++, i++)
	{
		str[i] = s2[b];
		ret[i] = '\0';
	}
	return (str);
}
