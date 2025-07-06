#include "main.h"

/**
 * _strchr - Localise un caractère dans une chaîne
 * @s: la chaîne de caractères
 * @c: le caractère à trouver
 *
 * Return: pointeur vers la première occurrence ou NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (0);
}
