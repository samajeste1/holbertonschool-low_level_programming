#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Function pointer used to compare values
 *
 * Return: Index of first matching element, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
