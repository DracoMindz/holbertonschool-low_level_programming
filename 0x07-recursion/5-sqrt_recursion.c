gitpusher#include "holberton.h"

/**
 * root - find the root of square root
 *@r: root
 *@n: value
 *
 *Description: find the root of the square through multipication
 *
 *Return: root
 */

int root(int r, int n)
{
		if (r * r == n)
		{
			return (r);
		}
		if (r * r > n)
		{
			return (-1);
		}
		return (root(r + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: variable
 *
 *Description: function returns the natural square root of a number;
 *
 * root - multiplies two root to find square
 * @r - root number and counter
 *
 * Description root: function mults two numbers together to find square
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 0)
	{
		return (root(0, n));
	}
}

