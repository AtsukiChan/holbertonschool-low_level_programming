#include <stdio.h>
/**
* main - Prints numbers 0-9 with commas in between
* Return: 0
*/

int main(void)
{
	int b;

	for (b = '0' ; b <= '9' ; b++)
	{	putchar(b);
		putchar(',');
		putchar(' '); }
	putchar ('\n');
	return (0);
}
