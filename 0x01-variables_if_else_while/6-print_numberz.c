#include <stdio.h>
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
