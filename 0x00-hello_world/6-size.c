#include <stdio.h>
#include <sys/cdefs.h>
/**
* main - Defines all the data types, then prints their size using sizeof.
* Return: 0
*/
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long int: %zu byte\n", sizeof(longintType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));

	return (0);
}
