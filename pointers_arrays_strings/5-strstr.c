#include "main.h"

/**
 * _strstr - Localise une sous-chaîne dans une chaîne
 * @haystack: chaîne principale
 * @needle: sous-chaîne à rechercher
 *
 * Return: pointeur vers le début de la sous-chaîne ou NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
