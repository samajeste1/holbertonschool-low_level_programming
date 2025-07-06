#include "main.h"

/**
 * main - check the code for rev_string
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Hello";

	rev_string(s);
	_putchar(s[0]);
	_putchar(s[1]);
	_putchar(s[2]);
	_putchar(s[3]);
	_putchar(s[4]);
	_putchar('\n');
	return (0);
}
