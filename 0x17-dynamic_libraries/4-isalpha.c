#include "holberton.h"

/**
 *_isalpha - checks for lowercase charaters
 * @c: Charater is to return value.
 *
 * Description: Find letters
 *
 * Return: One if successful.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'B'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
