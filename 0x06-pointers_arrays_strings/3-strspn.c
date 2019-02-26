#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Description: gets the length of a prefix substring
 *
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; *accept != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (y);
			}
		}
	}
	return (0);
}
