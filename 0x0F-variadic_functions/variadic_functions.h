#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>

/**
 * struct piper - creates a structure
 * @p: parameter
 * @Auntie: parameter
 *
 */
typedef struct piper
{
	char p;
	void (*Auntie)();

} peter;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);


#endif
