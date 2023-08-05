#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: ptr of an unsigned long int
 * @index: index to set change
 *
 * Return: 1 if it worked, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}

