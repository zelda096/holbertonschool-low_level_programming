#include <stdio.h>
#include "holberton.h"
/**
 * main - entry point
 * Des: _isupper
 *
 * Return: 1 or 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
			if (x != 100)
				printf(" ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");

	return (0);
}
