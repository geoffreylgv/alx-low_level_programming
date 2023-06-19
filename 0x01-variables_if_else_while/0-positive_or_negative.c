#include <stdli.h>
#include <stdio.h>
#include <time.h>

/**
 * main - The main project doing and printing block instructions
 *
 * Return: It returns 0 to say the code runs w/ success
 *
 */

int main(void)
{
	
	int nToPrint;

	srand(time());
	nToPrint = rand() - RAND_MAX / 2;

	if (nToPrint == 0)
	{
		printf("The number is zero => %d", nToPrint);
	}
	else if (nToPrint > 0)
	{
		printf("The number is positive => %d", nToPrint);
	}
	else
	{
		printf("The number is negative => %d", nToPrint);
	}
	return (0);
}
