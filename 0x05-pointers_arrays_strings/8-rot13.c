#include "holberton.h"


/**
 * rot13 - function shift numbers 13 to left
 * @r: pointer to astring
 *
 * Return: value
 */

char *rot13(char *r)
{
	int x, y;

	char array[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char array2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; array[x] != '\0'; x++)
	{
		for (y = 0; array2[y] != '\0'; y++)
		{
			if (r[x] == array[y])
			{
				r[x] = array2[y];
				break;
			}
		}
	}
	return (r);
}
