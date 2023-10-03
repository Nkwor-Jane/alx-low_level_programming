#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: array of argument tokens
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int f_from, f_to, r_only, wr_only;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);
	f_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	r_only  = 1;
	while (r_only)
	{
		r_only = read(f_from, buffer, BUFSIZE);
		if (r_only == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (r_only > 0)
		{
			wr_only = write(f_to, buffer, r_only);
			if (wr_only != r_only || wr_only == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(f_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can'r close f %d\n", f_from), exit(100);
	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f_to), exit(100);
	return (0);
}

