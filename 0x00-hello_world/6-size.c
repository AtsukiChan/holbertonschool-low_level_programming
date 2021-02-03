#include <stdio.h>
/**
* main - Defines all the data types, then prints their size using sizeof.
* Return: 0
*/
int main(void)
{
	printf("Char size is %lu\n", sizeof(char));
	printf("Int size is %lu\n", sizeof(int));
	printf("Float size is %lu\n", sizeof(float));
	printf("Long int size is %lu\n", sizeof(long int));
	printf("Long long int size is %lu\n", sizeof(long long int));

	return (0);
}
