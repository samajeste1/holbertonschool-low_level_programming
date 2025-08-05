#include <stdio.h>
#include "lists.h"

/**
 * main - test basic linked list functions
 *
 * Return: 0
 */
int main(void)
{
    list_t *head = NULL;

    /* Ajouter un noeud au début */
    add_node(&head, "Premier noeud");
    add_node(&head, "Deuxième noeud");

    /* Afficher la liste */
    printf("Liste après ajout au début:\n");
    print_list(head);

    /* Ajouter un noeud à la fin */
    add_node_end(&head, "Noeud à la fin");

    /* Afficher la liste */
    printf("\nListe après ajout à la fin:\n");
    print_list(head);

    /* Libérer la mémoire */
    free_list(head);

    return (0);
}
