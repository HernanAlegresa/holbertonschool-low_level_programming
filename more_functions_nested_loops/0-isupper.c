int _isupper(int c)
/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
