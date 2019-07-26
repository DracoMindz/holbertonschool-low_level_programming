#include <stdio.h>
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

/**
 * main - program adds positive numbers
 * @argc: count number of arguements
 * @argv: pointer
 *
 * Description: program add positive numbers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	while ((argc) = 0)
	{
		printf("0\n");
	}
	while (isalpha(argv[i] != 0)
	{
		printf("Error\n");
		return (1);
	}
		while ((argc) > 0)
		{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
