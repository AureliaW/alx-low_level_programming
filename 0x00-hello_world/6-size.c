#include <stdio.h>
/**
* main - prints size of various data types
*Return: 0 on sucess
*
*/

int main(void)
{
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of double: %ld bytes\n", sizeof(double));
	printf("Size of char: %ld byte\n", sizeof(char));

	return (0);
}
