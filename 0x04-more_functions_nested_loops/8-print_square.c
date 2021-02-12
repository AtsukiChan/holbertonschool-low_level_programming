#include "holberton.h"

/**
 * print_square - prints a square
 * @size: square size
 */

void print_square(int size)
{
	int v;
	int h;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (v = 0; v < size; v++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
