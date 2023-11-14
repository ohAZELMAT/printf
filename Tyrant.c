#include "main.h"

int    conditions(va_list args, char c)
{
    int    count;

    count = 0;
    if (c == 'c')
        count += _putchar(va_arg(args, int));
    if (c == 's')
        count += revo_putstr(va_arg(args, char *));
    if (c == 'd')
        count += tyrant_putnbr(va_arg(args, int));
    if (c == 'i')
        count += tyrant_putnbr(va_arg(args, int));
    if (c == '%')
        count += _putchar('%');
    return (count);
}

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
