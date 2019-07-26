#include "holberton.h"
#include <stdio.h>
/**
 * get_prime - function returns a prime number
 * @n: integer
 * @i: integer
 *
 *Return: Always 0.
 */
int get_prime(int n, int i)
{
	if (n <= 2)
		return (n == 2);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (get_prime(n, i + 1));
}
/**
 * is_prime_number - function returns 1 if input is prime
 * @n: integer
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}
