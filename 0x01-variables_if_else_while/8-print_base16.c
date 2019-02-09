#include <stdio.h>

/**
 * main - print base 16
 *
 * Description: Will print characters of base 16
 *
 * Return: 0
 */

int main(void)
{
	int v;
	int z;

	for (v = '0'; v <= '9'; v++)
	{
		putchar(v);
	}
	for (z = 'a'; z = 'f'; z++)
	{
		putchar(z);
	}

	putchar('\n');

	return (0);
}
