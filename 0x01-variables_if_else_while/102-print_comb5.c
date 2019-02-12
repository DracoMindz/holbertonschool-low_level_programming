#include <stdio.h>

/**
 * main - print number combinations
 *
 * Description: Will print different combinations onlye
 *
 * Return: 0
 */

int main(void)
{
	int w;
        int x;
        int y;
        int z;

        for (w = '0'; w <= '9';w++)
        {
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (w + x < y + z)
					{
						{
							putchar(w);
							putchar(x);
							putchar(' ');
							putchar(y);
							putchar(z);
						}
						//if (wy < '9' || z < '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
        }
        putchar ('\n');

        return (0);
}
