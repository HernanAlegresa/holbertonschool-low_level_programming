#include <stdio.h>
/**
 * main - the function
 * @argc: the first parameter
 * @argv: the second parameter
 * Return: Prints all the arguments it recieves
 */
int main(int argc, char *argv[])
{

	int i;
	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}

	return (0);
}
