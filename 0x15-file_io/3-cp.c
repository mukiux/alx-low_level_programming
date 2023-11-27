#include "main.h"
#include <stdio.h>

/**
 * err_fil - checking whether file can be opened.
 * @fil_frm: fil_frm argument.
 * @fil_to: fil_to.
 * @argv: normal arguments vector.
 * Return: no return values.
 */
void err_fil(int fil_frm, int fil_to, char *argv[])
{
	if (fil_frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fil_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checking the code for ALX School students.
 * @argc: number of arguments specified.
 * @argv: arguments vector specified.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fil_frm, fil_to, err_closn;
	ssize_t nchars, n_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fil_frm = open(argv[1], O_RDONLY);
	fil_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_fil(fil_frm, fil_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fil_frm, buf, 1024);
		if (nchars == -1)
			err_fil(-1, 0, argv);
		n_wr = write(fil_to, buf, nchars);
		if (n_wr == -1)
			err_fil(0, -1, argv);
	}

	err_closn = close(fil_frm);
	if (err_closn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil_frm);
		exit(100);
	}

	err_closn = close(fil_to);
	if (err_closn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil_frm);
		exit(100);
	}
	return (0);
}
