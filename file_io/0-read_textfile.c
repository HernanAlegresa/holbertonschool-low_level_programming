#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: the name of the file
* @letters: the letters to read and print
* Return: the letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bread;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bread = read(fd, buffer, letters);
	if (bread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	write(STDOUT_FILENO, buffer, bread);

	close(fd);
	free(buffer);

	return (bread);
}
