#include <stdio.h>     /* pour printf */
#include <stddef.h>    /* pour size_t */
#include "lists.h"     /* pour la définition de list_t */

/**
 * print_list - Affiche tous les éléments d'une liste list_t
 * @h: pointeur vers le premier élément (tête) de la liste
 *
 * Return: nombre d’éléments dans la liste
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
