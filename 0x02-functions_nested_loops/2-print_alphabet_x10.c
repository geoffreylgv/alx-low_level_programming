#include "main.h"
/**
 * print_alphabet_x10 - program that prints ten time the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for ( i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

