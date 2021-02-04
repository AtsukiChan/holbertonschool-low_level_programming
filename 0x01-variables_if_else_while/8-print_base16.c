#include <stdio.h>
/**
* main - Prints numbers and alphabet
* Return: 0
*/

int main(void)
{
	int b;
	char a;

	for (b = '0' ; b <= '9' ; b++)
	{	putchar(b); }

	for (a = 'a' ; a <= 'f' ; a++)
	{       putchar(a); }

		putchar('\n');

	return (0);
}
