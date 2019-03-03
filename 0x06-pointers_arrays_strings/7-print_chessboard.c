#include "holberton.h"
/**
 * print_chessboard - print chessboard
 *
 * @a: array size 8
 *
 * Description: creating fuction to compare two strings
 *
 * Return: value
 */
void print_chessboard(char (*a)[8])
{
	char y;
	char x;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][8]);
		}
		_putchar('\n');
	}
}
