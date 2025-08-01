list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    unsigned int len = 0;

    while (str && str[len])
        len++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new_node;
    }

    return (new_node);
}
