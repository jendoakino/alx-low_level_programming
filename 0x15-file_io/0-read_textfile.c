
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read.
 *
 * Return: The actual num of bytes read , printed, or 0 if  function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, t, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, t);
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
