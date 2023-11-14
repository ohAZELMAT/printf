#include "main.h"

int    tyrant_putnbr(int n)
{
    long    nb;
    int        len;

    nb = (long)n;
    len = smol_int_len(nb);
    if (nb < 0)
    {
        _putchar('-');
        nb = -nb;
    }
    if (nb > 9)
        tyrant_putnbr(nb / 10);
    _putchar(nb % 10 + '0');
    return (len);
}
