#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_number(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

int main(int argc, char *argv[])
{
    int i, sum = 0;

    for (i = 1; i < argc; i++)
    {
        if (!is_number(argv[i]))
        {
            printf("Error\n");
            return (1);
        }
        sum += atoi(argv[i]);
    }

    printf("Sum = %d\n", sum);
    return (0);
}
