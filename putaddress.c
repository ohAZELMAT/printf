#include "main.h"
/**
 * _putaddress - writes the address of a pointer.
 * @n: The Hexa to output
 *
 * Return: lenght of the hexa.
 */
int    _putaddress(size_t n)
{
int    i;

revo_putstr("0x");
i = revo_putnbr_hexa_size_t(n) + 2;
return (i);
}
