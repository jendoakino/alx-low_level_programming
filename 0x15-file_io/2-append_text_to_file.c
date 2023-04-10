#include "main.h"

/**
 * append_text_to_file - Appends txt at the end of  file.
 * @filename: A pointer to the name of the file.
 * @text_content: The strings  added  to the end of the files.
 * Return: On success, 1. On failure, -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}

