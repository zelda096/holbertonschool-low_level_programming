#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: 0
 */

int main(void)
{
	long int x, y;
	long int z = 0;
	long int bers = 30;
	long int d = bers;

	for (x = 2; x <= bers ; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (x % y == 0)
				z++;
		}
		if ((z == 2) && (bers % x == 0))
		{
			d = bers / x;
			if (d == 1)
			{
				printf("%ld", x);
				break;
			}
		}
		z = 0;
	}
	printf("\n");
	return (0);
}
