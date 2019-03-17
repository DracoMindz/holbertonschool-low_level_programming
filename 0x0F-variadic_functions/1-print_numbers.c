#include <stdio.h>
#include <stdarg.h>





void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
/*initialize valist for n number of integers past*/
	va_start(list, n);
/*access all arguments assigned to valist*/
	for (i = 0; i < n && separator[i] != '\0'; i++)
	{
		printf("%d", i);
	}
	va_end(list);
}
