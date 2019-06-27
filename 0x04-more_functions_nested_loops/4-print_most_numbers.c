#include "holberton.h"
/**
 * print_most_numbers - entry point
 * Des: print_most_numbers
 * void: empty
 * Return: none
 */
void print_most_numbers(void)
{
	char x;
	for (x = 0; x <= 9; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
