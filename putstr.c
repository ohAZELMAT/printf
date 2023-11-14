#include "main.h"
/**
 * revo_putstr - this writes a string
 * @str: The string to print
 *
 * Return: returns the lenghts of the string.
 */
int    revo_putstr(char *str)
{
int    i;

i = 0;
if (str)
{
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
else
{
write(1, "(null)", 6);
return (6);
}
return (i);
}
