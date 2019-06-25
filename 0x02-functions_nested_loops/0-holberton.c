#include "holberton.h"
/**
* main - entry point
* Des: prints "Holberton"
* Return: A text
*/
int main(void)
{
	char a[9] = "Holberton";

	int x = 0;

	while (x < 9)
	{
		_putchar(a[x]);
		x++;

	}

	_putchar('\n');
	return (0);
}
