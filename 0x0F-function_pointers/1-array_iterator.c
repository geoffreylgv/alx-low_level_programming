#include "function_pointers.h"

/**
* array_iterator - a function that executes a function
* on each element of an array
* @array: enty point array
* @size: array size
* @action: pointer to the function
* Return: N/A
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && size > 0 && action != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}

