#include <stdio.h>
#include <unistd.h>
#include "holberton"

/**
 * main - Does the thing
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int islower(int c);


int main (void) {
    
    int r;

    r = islower('H');
    _putchar(r + '0');
    r = islower('o');
    _putchar(r + '0');
    r = islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

int islower(int c)
{
    
    if (c > 96 && c < 122)
        {
            return 1;
        }
    else 
        return 0;
}
