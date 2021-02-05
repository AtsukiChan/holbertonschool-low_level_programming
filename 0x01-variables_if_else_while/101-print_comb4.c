#include <stdio.h>
/**
* main - does the thing
* Return: 0
*/
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = a + 1; b <= '9'; c++)
			putchar(a);
			putchar(b);
			putchar(c);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
