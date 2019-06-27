#include "holberton.h"
/**
 * print_numbers - entry point
 * Des: print_numbers
 * void: empty void
 * Return: none
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		_putchar('0' + x);
		x++;
	}
	_putchar('\n');
}
