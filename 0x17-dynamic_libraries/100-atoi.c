#include "holberton.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to be converted
 *
 * Description: converts a string to a variable
 *
 * Return: value
 */
int _atoi(char *s)
{
	int res = 0;
	signed char sign = 1;
	char *nums;

	for (nums = s; (*nums < '0' || *nums > '9') && *nums; nums++)
		if (*nums == '-')
		{
			sign = -sign;
		}
	for (; *nums >= '0' && *nums <= '9'; nums++)
	{
		res *= 10;
		if (sign == -1)
			res -= *nums - '0';
		else
			res += *nums - '0';
	}
	return (res);
	return (0);  
}
