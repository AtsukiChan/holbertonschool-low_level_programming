#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int print_last_digit(int);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

int print_last_digit(int)
{
	int lastDigit;
	lastDigit = r % 10
	return (lastDigit);
}

