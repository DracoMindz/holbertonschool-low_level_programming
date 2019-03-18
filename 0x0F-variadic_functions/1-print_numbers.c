#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int num;

/*initialize valist for n number of integers past*/
	va_start(valist, n);
/*access all arguments assigned to valis*/
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, unsigned int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);

	printf("\n");

}
