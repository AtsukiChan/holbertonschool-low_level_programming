#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int print_last_digit(int lastDigit)
{
	lastDigit = lastDigit % 10;
	if (lastDigit < 0)
		lastDigit = -lastDigit;
		_putchar(lastDigit + '0');
		return (lastDigit);
}

