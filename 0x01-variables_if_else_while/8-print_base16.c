#include <stdio.h>
/**
* main - Printing alphabets to f and numbers to 9
*
* Return: 0 on sucess
*
*/

int main(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
