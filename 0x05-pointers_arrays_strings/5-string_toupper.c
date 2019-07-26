#include "holberton.h"

/**
 * string_toupper -  function changed all letters to uppercase
 * @n: pointer
 *
 * Description: lowercase letters to uppercase letters
 *
 * Return: value
*/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - ' ';
		}
	}
	return (n);
}
