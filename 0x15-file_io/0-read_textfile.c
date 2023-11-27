#include "main.h"

/**
 * read_textfile - reading a text file and printing the letters
 * @filename: filename.
 * @letters: numbers of letters printed everytime.
 *
 * Return: numbers of letters printed. When fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int mx;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	mx = open(filename, O_RDONLY);

	if (mx == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(mx, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(mx);

	free(buf);

	return (nwr);
}
