#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print array
 * @a: var pointer
 * @n: var pointer two
 * Return: no
 */
void print_array(int *a, int n)
{
	{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < n)
		{
			printf("%d", a[x]);
		}
		if ((x + 1) != n)
		{
			printf(", ");
		}
		else
		{
			break;
		}
	}
	printf("\n");
}
}
