#include "variadic_functions.h"
/**
 * print_strings - this are Jay and Django
 * @separator: variable that print ", " between each string
 * @n: number of elements of print_strings in the main
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *y;
	unsigned int x;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(args, char *);
		printf("%s", y);

		if (separator == NULL)
		{
			return;
		}
		else if (x != n-1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
