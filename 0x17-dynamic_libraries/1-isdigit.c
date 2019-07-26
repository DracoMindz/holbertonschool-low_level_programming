#include "holberton.h"

/**
 * _isdigit - checks for digits
 * @c: Charater is to return value
 *
 * Description: Find numbers
 *
 * Return: On success 1.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
