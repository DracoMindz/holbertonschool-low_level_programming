#include "holberton.h"

/**
 * _isupper - checks for uppercase charaters
 * @c: Charater is to return value.
 *
 * Description: Find uppercase letters
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
