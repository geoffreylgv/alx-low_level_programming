#include "main.h"

/**
 * binary_to_uint - converts a binary to unsignet int
 * @b: binary parameter to convert
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, binary_base;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary_base = 1; len >= 0; len--, binary_base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += binary_base;
		}
	}

	return (ui);
}

