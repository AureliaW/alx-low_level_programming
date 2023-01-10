#include "main.h"

/**
 * main - prints product of two arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on sucess
 */

int main(int argc, char **argv)
{
	int i, a, b, product;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
		}
		product = a * b;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
