#include "main.h"

/**
 * read_textfile - reads a text and prints from a file
 * @filename: name of the file
 * @letters: letters to read
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int b, z;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	b = read(fd, buff, letters);
	if (b < 0)
	{
		free(buff);
		return (0);
	}
	buff[b] = '\0';
	close(fd);
	z = write(STDOUT_FILENO, buff, b);
	if (z < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (z);
}
