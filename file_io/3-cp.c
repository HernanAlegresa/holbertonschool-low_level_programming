#include "main.h"

/**
* main - the main function
* @file_from: name of the source file
* @file_to: name of the destination file
* Return: 1 on success, -1 on failure.
*/

int main(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bread, bwrite;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		return (-1);
	}

	while ((bread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bwrite = write(fd_to, buffer, bread);
		if (bwrite == -1 || bwrite != bread)
		{
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (bread == -1)
	{
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		return (-1);

	return (1);
}
