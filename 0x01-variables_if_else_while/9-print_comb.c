#include <stdio.h>
/**
* main - Printing single digits followed by , and spaced
*
* Return: 0 on success
*
*
*/

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
