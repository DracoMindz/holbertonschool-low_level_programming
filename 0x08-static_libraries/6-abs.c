#include "holberton.h"
/**
 * _abs - writes the absolute value
 * @n: The character to print absolute value
 *
 * Return: 0
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
		else if (n < 0)
		{
			return (-n);
		}
		else
		{
			return (0);
		}

	return (0);
}
