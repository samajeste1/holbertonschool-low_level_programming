/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if it's a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
