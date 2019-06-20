#include <stdio.h>
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int x = '0';
	int a = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
