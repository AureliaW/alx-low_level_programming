#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	long i, j = 612852475143;

	for (i = 2; i <= j; i++)
	{
		if (j % i == 0)
		{
			j = j / i;
			i--;
		}
	}
	printf("%lu\n", i);

	return (0);
}
