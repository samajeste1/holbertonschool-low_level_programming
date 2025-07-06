#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        int i = 0;
        while (accept[i])
        {
            if (*s == accept[i])
                return (s);
            i++;
        }
        s++;
    }
    return (0);
}
