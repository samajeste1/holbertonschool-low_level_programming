#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajoute un noeud à la fin de la liste
 * @head: adresse du pointeur vers le début de la liste
 * @str: chaine à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud ou NULL si échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
