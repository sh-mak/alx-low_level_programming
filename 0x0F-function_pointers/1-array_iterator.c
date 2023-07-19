#include "function_pointers.h"

/**
 * array_iterator - given a parameter on each element of an array
 * @array: integer array
 * @size: array size
 * @action: functoin pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
