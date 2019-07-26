#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - function concatenates two strings
 *
 * @s1: first array
 * @s2: 2nd array
 *
 * Return: value
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, n, a, b;

	if (s1 == 0)
	{
		s1 = " ";
	}
	else if (s2 == 0)
	{
		s2 = " ";
	}
	for (a = 0; s1[a] != 0; a++)
		;
	for (b = 0; s2[b]!= 0; b++)
		;
	b++;
	str = malloc(sizeof(char) * (a + b));
	for (i = 0; i < a; i++)
	{
		str[i] = s1[i];
	}
	for ( n = 0; n < b; n++, i++)
	{
		str[i] = s2[n];
	}
	return (str);
}
