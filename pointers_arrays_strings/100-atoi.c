#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer from string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;
	int found_num = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_num = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (found_num)
			break;
		i++;
	}
	return (sign * num);
}
