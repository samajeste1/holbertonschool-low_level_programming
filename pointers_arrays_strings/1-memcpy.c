#include "main.h"

/**
 * _memcpy - Copie la mémoire d'une source vers une destination
 * @dest: pointeur vers la destination
 * @src: pointeur vers la source
 * @n: nombre d'octets à copier
 *
 * Return: pointeur vers la destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
