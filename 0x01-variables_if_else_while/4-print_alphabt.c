#include <stdio.h>
/**
* main - Print alphabet in lower case except q and
*
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
		if (j != 'e' && j != 'q')
			putchar(j);

	putchar('\n');

	return (0);

}
