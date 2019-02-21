#include "holberton.h"

/**
 * rev_string - string in reverse
 * @s: pointer to string
 *
 * Description: reverse string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int i = 0;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	while (i < length)
	{
		temp = s[length];
		s[length] = s[i];
		s[i] = temp;
		i++;
		length--;
	}
}
