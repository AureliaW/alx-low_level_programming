#include <stdio.h>
/**
* main - Print alpahabet in reverse order
*
* Return: 0 on success
*
*
*/

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
