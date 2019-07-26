#include "variadic_functions.h"
/**
 * sum_them_all - parameters
 * @n: number of arguments
 * Return: s or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);

	if (n == 0)
	{
		return (0);
	}
}
