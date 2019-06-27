#include "holberton.h"
/**
 * print_diagonal - entry point
 * Des: print_diagonal
 * @n: int variable
 *
 */
void print_diagonal(int n)
{
	int x;
	int slash;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (slash = 0; slash < x; slash++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
