#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends file at the end of a fil4
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, length, wr_only;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	wr_only = write(append_file, text_content, length);
	close(append_file);
	return (wr_only == -1 ? -1 : 1);
}
