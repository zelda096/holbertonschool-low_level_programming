#include "holberton.h"
/**
* print_alphabet - entry point
* Des: print the alphabet with _putchar
* Return: A text
*/
void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;

	}
	_putchar('\n');

}
