#include <stdlib.h>
#include "main.h"

/**
 *
 *malloca_checked - function who allocates memory using malloc
 *
 * @b: number of bytes to allocate 
 * Retrun: allocated mem (pointer)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

