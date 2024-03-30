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
}
