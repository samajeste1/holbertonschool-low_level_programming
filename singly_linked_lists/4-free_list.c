#include <stdlib.h>
#include "lists.h"

/**
 * free_list - libère la mémoire d'une liste list_t
 * @head: pointeur vers le début de la liste
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
