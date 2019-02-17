#include "holberton.h"
#include <stdio.h>

/**
 * main - numbers 1 to 100
 *
 * Description: Fizz for mult 3/buzz mult 5
 *
 * Return: 0
 *
 */
int main(void)
{
	int x;
	int ch;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz ");
		}
		ch = '\n';

		if (x == 100)
		{
			putchar(ch);
		}
		else
		{
			printf("%d ", x);
		}
	}
	return (0);
}
