#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: function concatenates two strings
 *
 * Return: string
 */
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, i, b;
	char *str;

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
	for (n = 0; s2[n] != 0; n++)
	{
		if (n >= strlen(s2))
		{
			n = s2;
		}
		n++;
	}
	str = malloc(sizeof(char) * (a + n);
	for (i = 0; i < a; i++)
	{
		str[i] = s1[i];
	}
		     for (b = 0; b < n; b++, i++)
		     {
			     str[i] = s2[b];
		     }
	return (str);
}
