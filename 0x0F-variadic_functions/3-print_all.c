#include <studio.h>
#include <stardg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	int i;

	va_start(args, format);
	if ( i >= 0 && format != '\0');
	{
		printf("%s, %d, %f, %s\n", va_arg(args, char *);
		       }
			va_end(args);
	}
}
