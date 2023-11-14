#include "main.h"
/**
 * smol_hexa_len - this checks the lenghts of the given hexa
 * @n: The hexa to count
 *
 * Return:the lenght of the hexa.
 */
int    smol_hexa_len(size_t n)
{
int    i;

i = 1;
while (n > 15)
{
n = n / 16;
i++;
}
return (i);
}
