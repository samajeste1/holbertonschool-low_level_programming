#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: input string
 *
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
