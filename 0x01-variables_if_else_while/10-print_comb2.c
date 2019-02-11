#include <stdio.h>

/**
 * main - print lowercase alphbet
 *
 * Description: Will print lowercase only
 *
 * Return: Description of the returned value
 */

int main(void)
{
	int x;
	int z;

		for (x = '0'; x <= '9'; x++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				putchar(x);
				putchar(z);
				if (x < '9' || z < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar ('\n');

	return (0);
}
