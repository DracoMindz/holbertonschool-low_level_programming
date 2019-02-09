#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Description: Will print lowercase in reverse
 *
 * Return: 0
 */

int main(void)
{
	int z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
