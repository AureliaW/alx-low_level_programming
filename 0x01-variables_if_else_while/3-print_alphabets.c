#include <stdio.h>
/**
* main - print alphabet in lower case, then upper case
* Return: 0 on sucess
*
*
*/

int main(void)

{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar ('\n');

	return (0);
}
