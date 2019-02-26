#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer destination
 *
 * Description: sets the value of a pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
