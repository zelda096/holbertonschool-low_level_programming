#include <stdio.h>
/**
 * main - entry point
 * @argc: number args of  argv
 * @argv: array with args to count
 * Return: nums - args
 */

int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
	}
	printf("%d\n", cont - 1);
	(void)argv;
	return (0);
}
