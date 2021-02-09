#include <stdio.h>
#include <unistd.h>
#include "holberton.c"
/**
 * main - Prints Holberton
 * _putchar - defines new putchar
 * c - letter to be printed
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
	_putchar('\n');

	return (0);
}
