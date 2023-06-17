#include <stdio.h>
#include <unistd.h>

/**
 * main - block principale du code
 * Return: 1(Success write method passed)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
