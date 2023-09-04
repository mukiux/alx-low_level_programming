#include "main.h"

/**
 * create_file - creating a single file
 * @filename: filename of the file created.
 * @text_content: content writed in the file created earlier.
 *
 * Return: 1 if it success. -1 if it always fails.
 */
int create_file(const char *filename, char *text_content)
{
	int im;
	int nletts;
	int readw;

	if (!filename)
		return (-1);

	im = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (im == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletts = 0; text_content[nletts]; nletts++)
		;

	readw = write(im, text_content, nletts);

	if (readw == -1)
		return (-1);

	close(im);

	return (1);
}
