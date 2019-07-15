#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
/**
 * main - entry point
 * @argc: the nums of args
 * @argv: the array with the args
 * Return: 0 or 1 if the args are not nums
 */

int main(int argc, char *argv[])
{
	int cont;
	int nums;
	int sup;

	sup = 0;

	int start[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		nums = atoi(argv[1]);
		if (nums < 0)
		{
			printf("0\n");
			return (1);
		}
		for (cont = 0; start[cont]; cont++)
		{
		if (nums >= start[cont])
		{
			sup = sup + (nums / start[cont]);
			nums = nums % start[cont];
		}
		if (nums == 0)
		{
			break;
		}
	}
		printf("%d\n", sup);
		return (0);
}
