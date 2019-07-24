#include "function_pointers.h"
/**
 * array_iterator - entry point
 * @array: size of array
 * @action: function to pointer
 * @size: size
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if ((action != NULL) && (array != NULL))
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
