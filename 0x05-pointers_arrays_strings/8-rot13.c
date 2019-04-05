#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - function shift numbers 13 to left
 * @r: pointer to astring
 *
 * Return: Always 0.
 */
char *rot13(char *)
{
	int x, y;

	char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmUpperCase";

	for (x = 0; r[x]; x++)
	{
		for (y = 0; arr[y]; y++)
		{
			if (r[x] == arr[y])
			{
				arr[x] == arr2[y];
				break;
			}
		}
	}
}
