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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1 || (file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1)
	{
		if (file_from != -1)
			close(file_from);

		dprintf(STDERR_FILENO, "Error: Can't %s file %s\n", (file_from == -1) ? "read from" : "write to", argv[1]);
		return (file_from == -1 ? 98 : 99);
	}

	do
	{
		bread = read(file_from, buffer, BUFFER_SIZE);
		if (bread == -1 || (bwrite = write(file_to, buffer, bread)) == -1 || bwrite != bread)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't %s file %s\n", (bread == -1) ? "read from" : "write to", argv[1]);
			return (bread == -1 ? 98 : 99);
		}
	} while (bread > 0);

	close(file_from);
	close(file_to);

	return (0);
}
