#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to be printed, pointer
 * @f: function pointer
 *
 * Description: function that prints a name
 *
 * Return: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	print_name(name, (*f)(char));
}
