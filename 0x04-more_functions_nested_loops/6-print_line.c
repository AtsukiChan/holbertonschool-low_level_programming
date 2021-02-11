#include <stdio.h>
#include "holberton.h"

/**
 * print_line - draws a line
 * @n: line length
 */

void print_line(int n);

int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			putchar('_');
	}
	putchar('\n');
}
