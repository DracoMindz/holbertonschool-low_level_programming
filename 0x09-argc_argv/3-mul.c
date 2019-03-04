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
 * main - program multiplies two numbers
 * @argc: count number of arguements
 * @argv: pointer
 *
 * Description: program multiplies two numbers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 || argc == 0)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
