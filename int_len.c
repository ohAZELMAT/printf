#include "main.h"
/**
 * smol_int_len - this checks the lenghts of an integer.
 * @n: argumen t.
 * Return: the len of the integer.
 */
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
