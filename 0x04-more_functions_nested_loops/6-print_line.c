#include "holberton.h"
/**
 * print_line - entry point
 * Des: _isupper
 * @n: int variable
 * Return: 1 or 0
 */
void print_line(int n)
{
	int x;

	if (n > -1)
	{
		for (x = 1; x < n; x++)
		{

			_putchar('_');

		}
	}
	_putchar('\n');
}
