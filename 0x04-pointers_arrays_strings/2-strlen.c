#include "holberton"

/**
 * strlen - calculate string length
 *
 * @*s: string length input
 *
 * Description: caluculate string length from input
 *
 * Return: value
 */
int _strlen(char *s)
{
	int len = 0;

	While(*s != '\0');
	{
		len++;
		s++;
	}
	return (len);
}
