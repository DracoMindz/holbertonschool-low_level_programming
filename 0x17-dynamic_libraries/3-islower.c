#include "holberton.h"

/**
 * _islower - checks for lowercase charaters
 * @c: Charater is to return value.
 *
 * Description: Find lowercase letters
 *
 * Return: On success 1.
 */
int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
		return (0);
}
