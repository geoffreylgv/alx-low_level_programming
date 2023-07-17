#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - checks if a given char is number or not
* @a: char to be checked
* Return: 1, if its a number, else 0
**/
int isNumber(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);

	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
* main - function that adds positive numbers
* @argc: argument count
* @argv: array of argument strings
* Return: result of addition or 1
**/
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = isNumber(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

