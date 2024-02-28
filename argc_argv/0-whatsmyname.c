#include <stdio.h>
/**
 * main - the function
 * @argc: the parameter
 * @argv: the second paramter
 * Return: Program thats prints its name
 */
int main(int argc, char *argv[])
{

	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	else
	{
		printf("no program provided .\n");
	}

	return (0);
}
