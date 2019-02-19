#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: output  alphabet
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
