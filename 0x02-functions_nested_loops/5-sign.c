#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - Does the thing
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_sign(int n);

int main (void) 
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int print_sign(int n)
{
	if (n > 0){
		            
	_putchar(43);
	return 1;
	}			        }
	        
	else if (n == 0) {

	_putchar('0');
	return 0;
	}

	else {
	_putchar(45);
	return -1;
	}
}
