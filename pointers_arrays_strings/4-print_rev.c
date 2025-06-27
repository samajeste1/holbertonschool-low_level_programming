#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print the string in reverse */
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}
