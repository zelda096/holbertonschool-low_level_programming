#include "variadic_functions.h"
/**
 * print_numbers - entry point
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int s;
	va_list args;

	if (n == 0)
	{
		va_end(args);
		return;
	}

	va_start(args, n);

	for (s = 0; s < n; s++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator == NULL)
		{
			return;
		}
		else if (s != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
