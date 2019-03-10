#include "holberton.h"

/**
 * atoi - function converts a string to an integer
 * @str: string to be converted
 *
 * Description: converts a string to a variable
 *
 * Return: value
 */
int atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';
	return (sign * res);
}
