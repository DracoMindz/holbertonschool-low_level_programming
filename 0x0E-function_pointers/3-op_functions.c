#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - add two values
 *
 * @a: value 1
 * @b: value 2
 *
 * Description: add two values
 *
 * Return: value
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtract two values
 *
 * @a: value 1
 * @b: value 2
 *
 * Description: subtract two values
 * Return: value
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply two values
 *
 * @a: value 1
 * @b: value 2
 *
 * Description: multiply two values
 *
 * Return: value
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divide one value by another
 *
 * @a: value 1
 * @b: value 2
 *
 * Desrciption: Divide one value by another
 *
 * Return: value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - mod a numer by another
 *
 * @a: value 1
 * @b: value 2
 * Return: value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
