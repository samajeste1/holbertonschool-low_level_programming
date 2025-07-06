#include "main.h"
#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");
        printf("0x%02x", buffer[i]);
    }
    printf("\n");
}

int main(void)
{
    char buffer[98] = {0};
    char buffer2[] = "Holberton!";

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
