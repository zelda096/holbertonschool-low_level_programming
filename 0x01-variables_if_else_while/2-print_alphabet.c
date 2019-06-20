#include <stdio.h>
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
