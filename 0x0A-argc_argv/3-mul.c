#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: arg count
 * @argv: array of arg count
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int a, b, response;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert a string to an int*/
	/* i can use my own atoi written before as well*/
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	response = a * b;
	printf("%d\n", response);
	return (0);
}

