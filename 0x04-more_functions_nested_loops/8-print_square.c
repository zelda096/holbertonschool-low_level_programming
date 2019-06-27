#include "holberton.h"
/**
 * print_square - entry point
 * Des: print_square
 * @size: int variable
 * Return: 1 or 0
 */
void print_square(int size)
{

	if (size > 0)
	{
		for (int x = 1; x <= size; x++)
		{
			for (int j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
