#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup- function returns pointer to new space, copies string
 * @str: pointer
 *
 * Description: function returns pointer to new space, copies string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	int i;
	char *b = str;

	str == '\0';
	return (NULL);

	for (i = 0; str[i]; i++)
		;
	b = malloc((i + 1) * sizeof(char));
	while ((b = NULL))
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		b[i] = str[i];
	}
	reeturn(b);
}
