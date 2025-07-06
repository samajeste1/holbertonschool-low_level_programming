#include "main.h"

/**
 * _strpbrk - Recherche le premier caractère présent dans accept
 * @s: chaîne à analyser
 * @accept: caractères recherchés
 *
 * Return: pointeur vers le caractère trouvé ou NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}

		s++;
	}

	return (0);
}
