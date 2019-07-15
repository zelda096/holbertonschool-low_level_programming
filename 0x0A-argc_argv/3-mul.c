#include <stdio.h>
#include "stdlib.h"
/**
 * main - entry point
 * Description: program that multiplies two numbers
 * @argc: num to args
 * @argv: array with args
 * Return: multiplication of two nums
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int res;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		res = x * y;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
