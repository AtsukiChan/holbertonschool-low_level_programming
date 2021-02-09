#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @lastDigit: Last digit to be checked
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

