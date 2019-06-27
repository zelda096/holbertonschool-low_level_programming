#include "holberton.h"
/**
 * print_square - entry point
 * Des: print_square
 * @size: int variable
 * Return: 1 or 0
 */
void print_square(int size)
{
	int x, j;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
