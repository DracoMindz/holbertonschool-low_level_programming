#include "holberton.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to be converted
 *
 * Description: converts a string to a variable
 *
 * Return: value
 */
int_atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[i] >= 48 && s[i] <= 57)
	{
		return (0);
	}
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (sign * res);
}
