#include "holberton.h"

/**
 * _pow_recursion - a function returns value of x to the power of y
 * @x: integer
 * @y: exponent
 *
 * Description: function returns value of x to the power of y
 *
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
