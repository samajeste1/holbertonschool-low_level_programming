#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by separator
 * @separator: string printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
