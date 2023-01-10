#include "main.h"

/**
 * main - prints number of argument
 * passed to a program
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on sucess
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
