#include "main.h"
/**
 * revo_putnbr_hexa_size_t - this is a helper function for putaddress
 * @n: The Hexa to print
 *
 * Return:lenght of the Hexa.
 */
int    revo_putnbr_hexa_size_t(size_t n)
{
char    *base;
int        len;

len = smol_hexa_len(n);
base = "0123456789abcdef";
if (n > 15)
revo_putnbr_hexa_size_t(n / 16);
_putchar(base[n % 16]);
return (len);
}
