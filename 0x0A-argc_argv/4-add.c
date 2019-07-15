#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: array of pointers to the strings
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (isdigit(argv[x][y]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
