#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename
 * @text_content: content writed
 *
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nletters;
	int read;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	read = write(f, text_content, nletters);

	if (read == -1)
		return (-1);

	close(f);

	return (1);
}

