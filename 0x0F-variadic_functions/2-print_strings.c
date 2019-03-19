#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints a string
 * @separator: parameter
 * @n: parameter
 * Description: function that print a string
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *word;

/*initialize valist for n number of integers past*/
	va_start(valist, n);
/*access all arguments assigned to valis*/
	for (i = 0; i < n; i++)
	{
		word = va_arg(valist, char *);
		if (word == NULL)
		{
			printf("(nil)");
		}
		if (word != '\0')
		{
			printf("%s", word);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);

	printf("\n");
}
