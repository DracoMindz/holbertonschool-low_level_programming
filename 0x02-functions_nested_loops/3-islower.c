#include "holberton.h"

/**
 *
 * int _islower(int c) - checks for lowercase charaters
 *
 * Return: 0
 *
 */

int _islower(int c);
{
	int c;

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
