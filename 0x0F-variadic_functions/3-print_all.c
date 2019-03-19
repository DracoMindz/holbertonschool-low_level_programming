#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * chuck - function that prints a char
 * @args: parameter
 * Description: function that print a char
 *
 * Return: void
 */
void chuck(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * inta - function that prints an int
 * @args: parameter
 * Description: function that print an int
 *
 * Return: void
 */
void inta(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * string - function that prints a string
 * @args: parameter
 * Description: function that print a string
 *
 * Return: void
 */
void string(va_list args)
{
	char *stan = va_arg(args, char *);

	if (stan == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", stan);
}
/**
 * fluffy - function that prints a float
 * @args: parameter
 * Description: function that print a float
 *
 * Return: void
 */
void fluffy(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all- function that prints a string
 * @format: parameter
 * Description: function that print a string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	peter piper[] = {
		{'c', chuck},
		{'i', inta},
		{'f', fluffy},
		{'s', string},
		{'\0', NULL}
	};

	va_list args;
	int i = 0, y;
	char *space = " ", *sep = ",";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		y = 0;
		while (piper[y].p != '\0')
		{
			if (format[i] == piper[y].p)
			{
				printf("%s", space);
				piper[y].Auntie(args);
				space = sep;
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
