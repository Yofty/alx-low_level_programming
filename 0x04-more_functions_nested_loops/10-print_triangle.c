#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : size is the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				if (y < (size - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			size--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
