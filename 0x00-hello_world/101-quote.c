#include <stdio.h>
#include <unistd.h>
/**
 * main - prints string
 *
 * Return: void
 */
int main(void)
{
	int i = 0;
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; str[i] != '\0'; i++)
		;
	write(2, str, i);
	return (1);
}
