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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		continue;
		putchar(i);
	}

	putchar('\n');

	return (0);

}
