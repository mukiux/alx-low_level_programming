#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int id;
	int nletts;
	int readwr;

	if (!filename)
		return (-1);

	id = open(filename, O_WRONLY | O_APPEND);

	if (id == -1)
		return (-1);

	if (text_content)
	{
		for (nletts = 0; text_content[nletts]; ++nletts)
			;

		readwr = write(id, text_content, nletts);

		if (readwr == -1)
			return (-1);
	}

	close(id);

	return (1);
}
