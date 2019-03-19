#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers
 * @separator: parameter
 * @n:parameter
 *
 * Description: function prints numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

/*initialize valist for n number of integers past*/
	va_start(valist, n);
/*access all arguments assigned to valis*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, unsigned int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);

	printf("\n");

}
