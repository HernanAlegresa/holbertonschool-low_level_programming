#include <stdio.h>
/**
 * main - the function
 * @argc: the parameter
 * @argv: the second parameter
 *
 *
 * Return: prints the number of arguments passed to it
 */
int main(int argc, char *argv[])
{

	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
