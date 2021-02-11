#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0-9 without 1 and 2
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	_putchar('\n');
}
