#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0, cap = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[i])
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		cap = 0;
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
