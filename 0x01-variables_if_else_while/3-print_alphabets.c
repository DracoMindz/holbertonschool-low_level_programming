#include <stdio.h>
/**
 * main - print lowercase, then uppercase
 *
 * Description: Will print upper and lower cases together
 *
 * Return: 0
 */

int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++);
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++);
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
