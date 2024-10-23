#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	/* Loop through the alphabet */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n'); /* Print a new line */
	return (0);
}
