#include "holberton.h"

/**
 * factorial - function returns factorial of a given number
 * @n: variable
 *
 * Description: function returns factoril of a given number
 *
 * Return: number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n + factorial(n - 1));
}
