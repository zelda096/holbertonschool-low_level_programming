#include "holberton.h"
/**
 * print_most_numbers - entry point
 * Des: print_most_numbers
 * void: empty
 * Return: none
 */
void print_most_numbers(void)
{
	for (int x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
	}
	_putchar('\n');
}
