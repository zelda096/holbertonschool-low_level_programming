#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - entry point
* Des: _islower
* @n: variable
* Return: 0
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%i", n);
		printf("\n");
	}
}
