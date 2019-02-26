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
			if ( a[x] == 1)
			{
				_putchar('p');
			}
			if (a[x] == 6)
			{
				_putchar('P');
			}
			if (a[x] == 0 && y < 8)
			{
				a[y] = {r, k, b, q, k, b, k, r};
			}
			if (a[x] == 7 && y < 8)
			{
				
