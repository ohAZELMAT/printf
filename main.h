#ifndef MAIN_H
# define MAIN_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int        revo_putstr(char *str);
int        tyrant_putnbr(int n);
int        _putchar(char c);
int        _putaddress(size_t n);
int        revo_putnbr_hexa_size_t(size_t n);
int        smol_hexa_len(size_t n);
int        _printf(const char *format, ...);
int        smol_int_len(int n);
#endif
