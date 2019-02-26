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
	int c = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[x] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				c++;
				break;
			}
		}
		if (accept == '\0')
		{
			return (c);
		}
	}
	return (0);
}
