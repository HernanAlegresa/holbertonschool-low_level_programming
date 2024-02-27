#include <stdio.h>

/**
* main - prints _putchar
* Return: always 0.
*/
int main(void)
{
	char frase[] = "_putchar";
	int i;
	for (i = 0; i <= 7; i++)
		_putchar(frase[i]);
		_putchar('\n');
	return (0);
}
