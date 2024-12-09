#ifndef ft_print
#define ft_print
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	calculate_len_int(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int	ft_strlen(char *s);
void ft_putnbr_hex(unsigned long n);
void	ft_putnbr(int x);
int calculate_hex_length(unsigned long n);


#endif