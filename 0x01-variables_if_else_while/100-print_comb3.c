#include <stdio.h>

/**
 * main - print number combinations
 *
 * Description: Will print different combinations only
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			if (x < z)
			{
				{
					putchar(x);
					putchar(z);
				}
					if (x < '8' || z < '9')
					{
					putchar(',');
					putchar(' ');
					}
			}
		}
	}
	putchar ('\n');

	return (0);
}
