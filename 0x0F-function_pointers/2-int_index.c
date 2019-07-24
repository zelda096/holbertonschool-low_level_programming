#include "function_pointers.h"
/**
 * int_index - entry point, index
 * @array: array of array xD
 * @size: number of elements in the array "array"
 * @cmp: function to pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if ((array != NULL) && (cmp != NULL))
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
