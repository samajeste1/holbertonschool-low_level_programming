#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - Prints buffer in hexa
 * @buffer: The address of memory to print
 * @size: The size of the memory to print
 *
 * Return: void
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for memcpy
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[] = "12345678901234567890123456789012345678901234567890";

	_memcpy(buffer + 50, buffer2, 10);
	simple_print_buffer(buffer, 98);
	return (0);
}
