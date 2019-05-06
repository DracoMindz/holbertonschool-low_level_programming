#include "holberton.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Description: creating fuction to compare two strings
 *
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int n;
	int d;

	for (n = 0; s2[n] != '\0' && s1[n] != '\0'; n++)
	{
		if (s1[n] - s2[n] != 0)
		{
			break;
		}
	}
	d = s1[n] - s2[n];
	return (d);
}
