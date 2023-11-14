#include "main.h"

int    smol_int_len(int n)
{
    int        i;
    long    nb;

    nb = (long)n;
    i = 1;
    if (nb < 0)
    {
        nb = -nb;
        i++;
    }
    while (nb > 9)
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}
