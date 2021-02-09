#include <stdio.h>
#include "holberton.h"

/**
 * main - Does the thing
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int add (int, int);

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}


int add (int a, int b);
{
	return (a + b);
}
