#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that adds integers
 * @n: parameter
 *
 * Description: function that adds integers
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

/*access all arguements assigned to valist*/
	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
/*clean memory reserved for valist*/
		va_end(valist);
		return (sum);
}
