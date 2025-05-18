#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int nmbr);
int ft_uputnbr(unsigned int nmbr);
int ft_printf_hex(unsigned int nmbr, const char format);
int ft_pointersp(void *pt);
int ft_res_print(va_list arguments, unsigned char c);
int ft_printf(char const *res, ...);

#endif
