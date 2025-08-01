#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array to iterate
 * @size: Size of the array
 * @action: Function pointer to apply on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
