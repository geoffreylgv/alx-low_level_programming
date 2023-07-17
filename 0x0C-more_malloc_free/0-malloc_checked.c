#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size amount to allocate
 *
 * Return: Pointer (allocated memory)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

