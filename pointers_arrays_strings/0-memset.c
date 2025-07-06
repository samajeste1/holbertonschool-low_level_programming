#include "main.h"

/**
 * _memset - Remplit la mémoire avec une constante
 * @s: pointeur vers la zone mémoire à remplir
 * @b: la valeur à utiliser
 * @n: le nombre d'octets à remplir
 *
 * Return: pointeur vers la mémoire modifiée
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
