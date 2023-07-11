#include "main.h"

/**
 * positive_or_negative - function that prints values is positive or negative
 * @n: parameter n is the given value to test case
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}

