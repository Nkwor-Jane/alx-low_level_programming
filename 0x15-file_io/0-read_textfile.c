#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: if NULL return 0
 * @letters: number of letters it should read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total, txt_read;
	char temp[BUFSIZE];

	if (filename == NULL)
		return (0);
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);
	total = 0;
	txt_read = 1;
	while (letters > BUFSIZE && txt_read != 0)
	{
		txt_read = read(txt_file, temp, BUFSIZE);
		write(STDOUT_FILENO, temp, txt_read);
		total += txt_file;
		letters -= BUFSIZE;
	}
	txt_read = read(txt_file, temp, letters);
	write(STDOUT_FILENO, temp, txt_read);
	total += txt_read;
	close(txt_file);
	return (total);
}

