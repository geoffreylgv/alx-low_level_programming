#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers from min val to max val
 * @min:range min val
 * @max: range max val
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *x;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	x = malloc(sizeof(int) * s);

	if (x == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
		x[i] = min++;

	return (x);
}

