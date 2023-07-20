#include <stdio.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @num_bytes: The number of bytes to print from the main function.
 *
 * Return: N/A.
 */
void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)&print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
		printf("%02x", ptr[i]);

	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments including the program name.
 * @argv: An array of strings containing the argc
 *
 * Return: 0 on success, otherwise non-zero.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);
	return (0);
}
