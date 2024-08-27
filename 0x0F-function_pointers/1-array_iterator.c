#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element to an array
 * @array: The array to iterate
 * @size: the size of the iterated array
 * @action: The pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
