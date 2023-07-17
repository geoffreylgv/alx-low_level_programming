#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previous mem allocated
 * @old_size: size, old space ptr allocate in byte
 * @new_size: new space to allocate in byte
 *
 * Return: pointer ( new_size == old_size, returns ptr without changes)
 * if malloc fails, returns NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ex, *cel;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == 0)
		return (malloc(new_size));

	ex = malloc(new_size);

	if (ex == 0)
		return (NULL);

	cel = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ex[i] = cel[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			ex[i] = cel[i];
	}

	free(ptr);
	return (ex);
}

