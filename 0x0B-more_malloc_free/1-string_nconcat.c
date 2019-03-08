#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
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

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != 0; a++)
		;
	for (b = 0; s2[b] != 0; b++)
		;
	if ((myStrlen(*s2) > n)
		{
		}
	if ((myStrlen(s2) < n)
		{
		}
	str = malloc(sizeof(char) * (a + b));
	for (i = 0; i < a; i++)
	{
		str[i] = s1[i];
	}
	for (b = 0; n < b; n++, i++)
	{
		str[i] = s2[n];
	}
	return (str);
}
