#include "holberton.h"
/**
 * swap_int - pointer.
 * Des: updates the value it points to to 98.
 * @a: var pointer
 * @b: var pointer two
 * Return in 0
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;

	*a = *b;

	*b = var;
}
