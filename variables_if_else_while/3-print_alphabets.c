#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
    char letter;
    // Print lowercase letters
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    // Print uppercase letters
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n'); // Print a new line
    return (0);
}
