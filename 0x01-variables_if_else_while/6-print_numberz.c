#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: Print single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int z;

	for (z = '0'; z<= '9'; z++)
	{
		putchar(z);
	}

	putchar('\n');

	return (0);
}
