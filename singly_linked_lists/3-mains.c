#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the add_node_end function
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head = NULL;

    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    print_list(head);

    return (0);
}
