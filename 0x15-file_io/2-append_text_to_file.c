#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename
 * @text_content: content to append
 *
 * Return: 1 file exists, -1 on fail & doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nletters;
	int read;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		read = write(f, text_content, nletters);

		if (read == -1)
			return (-1);
	}

	close(f);

	return (1);
}

