#include "main.h"
/**
 * conditions - this is a helper function.
 * @args: The proccessed arguments.
 * @c: the character in the format srting.
 * Return: the current count.
 */
int    conditions(va_list args, char c)
{
int    count;

count = 0;
if (c == 'c')
count += _putchar(va_arg(args, int));
else if (c == 's')
count += revo_putstr(va_arg(args, char *));
else if (c == 'd')
count += tyrant_putnbr(va_arg(args, int));
else if (c == 'i')
count += tyrant_putnbr(va_arg(args, int));
else if (c == '%')
count += _putchar('%');
else
{
count += _putchar('%');
count += _putchar(c);
}
return (count);
}
/**
 * _printf - this is the main function.
 * @format: The format string.
 * Return: the number of caracters writen to stdout.
 */
int _printf(const char *format, ...)
{
int        i;
int        count;
va_list    args;
char    c;

i = 0;
count = 0;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
c = format[i + 1];
count += conditions(args, c);
i = i + 2;
}
else
{
_putchar(format[i]);
count++;
i++;
}
}
va_end(args);
return (count);
}
