#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    list_t *new_node;

    new_node = add_node_end(&head, "First node");
    if (new_node == NULL)
    {
        printf("Failed to add node\n");
        return (1);
    }

    new_node = add_node_end(&head, "Second node");
    if (new_node == NULL)
    {
        printf("Failed to add node\n");
        return (1);
    }

    print_list(head);

    free_list(head);

    return (0);
}
