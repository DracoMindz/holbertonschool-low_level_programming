#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
/*initialize valist for n number of integers past*/
	va_start(valist, n);
/*access all arguments assigned to valis*/
	for (i = 0; i < n; i++)
	{
		printf("%d", i);
	}
	va_end(valist);

	printf("\n");

}
