#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
