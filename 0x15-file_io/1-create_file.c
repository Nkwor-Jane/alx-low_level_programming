#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, length, wr_only;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	wr_only = write(new_file, text_content, length);
	if (close(new_file) == -1)
		return (-1);
	return (wr_only == -1 ? -1 : 1);
}
