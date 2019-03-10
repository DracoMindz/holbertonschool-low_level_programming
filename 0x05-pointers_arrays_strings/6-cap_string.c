#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of string
 * @n: pointer
 *
 * Description: capitalize words
 *
 * Return: value
 */

char *cap_string(char *n)
{
	int i, m;
	char c[] = " \t\n,;.!?\"(){}";


	for (i = 0; n[i] != '\0'; i++)
	{
		for (m = 0; c[m] != '\0'; m++)
		{
			if (n[i - 1] == c[m])
			{
				if (n[i] >= 'a' && n[i] <= 'z')
				{
					n[i] = ((char)n[i] - 'a' + 'A');
				}
			}
		}
	}
	return (n);
}
