#include <stdio.h>
/**
* main - Entry point
*
* Return: A text
*/
int main(void)
{
	int a = 'a';

	int s = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (s <= 'Z')
	{
		putchar(s);
		s++;
	}

	putchar('\n');
	return (0);
}
