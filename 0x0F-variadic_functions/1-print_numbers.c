#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
/*initialize valist for n number of integers past*/
	va_start(valist, n);
/*access all arguments assigned to valis*/
	for (i = 0; i <= n && separator[i] != '\0'; i++)
	{
		printf("%d", i);
		/*n = va_arg(valist, unsigned int);*/
	}
	va_end(valist);

	printf("\n");

}
