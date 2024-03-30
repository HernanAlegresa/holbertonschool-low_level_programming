#include "main.h"

/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, or an exit code on failure.
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bread, bwrite;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		return (99);
	}

	do {
		bread = read(file_from, buffer, BUFFER_SIZE);
		if (bread == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close(file_from);
			close(file_to);
			return (98);
		}

		bwrite = write(file_to, buffer, bread);
		if (bwrite == -1 || bwrite != bread)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			return (99);
		}
	} while (bread > 0);

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (close(file_from) == -1) ? file_from : file_to);
		return (100);
	}

	return (0);
}
