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
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		putchar('\n');
		x++;
	}
}
