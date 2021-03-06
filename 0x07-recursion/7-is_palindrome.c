#include "holberton.h"

int Length(char *s, int a);
int checker(char *s, int b, int e);

/**
 * is_palindrome - function that returns string if palindrome
 * @s: pointer
 *
 * Description: function that returns string if palindrome
 *
 * Return: value
 */

int is_palindrome(char *s)
{
	int len = Length(s);

	if (len == 0)
	{
		return (1);
	}
	return ((checker(s, 0, (Length - 1));
	}
}

int Length(char *s, int a)
{
	if (*s == '\0')
	{
		return (0);
		return (Length(s + 1) + 1);
	}
}
int checker(char *s, int b, int e)
{
	if (b >= e)
	{
		return (1);
	}
	if (s[b] != s[e])
	{
		return (0);
	}
	else
	{
		return ((checker(s, (b + 1), (e - 1));
	}
}
