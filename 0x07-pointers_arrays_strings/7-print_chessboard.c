#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a : a ia array of chars
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		for (y = 0 ; y < 8 ; y++)
		{
			_putchar(a[x][y]);
		}
		putchar ('\n');
		x++;
	}
}
