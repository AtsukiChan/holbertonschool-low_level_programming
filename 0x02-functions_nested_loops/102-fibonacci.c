#include <stdio.h>
#include "holberton.h"

/**
 * printFibonacciNumbers - Prints the fibonacci sequence
 * @n: Number
 */

int main(void)
{
	printFibonacciNumbers(50);
	return (0);
}

void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;

	if (n < 1)
		return;
	printf("%d ", f1);
	putchar(',');
	for (i = 1; i < n; i++)
	{
		printf("%d ", f2);
		putchar(',');

		int next = f1 + f2;

		f1 = f2;

		f2 = next;
	}
}
