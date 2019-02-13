#include "holberton.h"

/**
 * main - practice with putchar
 *
 * Description: print quote use header
 *
 * Return: 0
 */

int main(void)
{
	int i;

	char name[10] = "Holberton";

	for (i = 0; i < 10; i++)
	{
		putchar(name[i]);
	}

	return (0);
}
