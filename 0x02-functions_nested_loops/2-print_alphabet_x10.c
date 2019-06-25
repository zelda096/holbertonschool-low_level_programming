#include "holberton.h"
/**
* print_alphabet_x10 - entry point
* Des: print the alphabet with _putchar
* Return: A text
*/

void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0 ; x < 10; x++)
	{
		for (y = 'a' ; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
