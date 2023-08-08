#include "main.h"

/**
 * read_textfile - function that reads a text
 * file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: count as numbers of letters, 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, count;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(f, buffer, letters);
	count = write(STDOUT_FILENO, buffer, nrd);

	close(f);

	free(buffer);

	return (count);
}

