#include "ft_functions.h"
void ft_putnbr_hex(unsigned long n) 
{
    char *hex_base = "0123456789abcdef";
    if (n >= 16)
        ft_putnbr_hex(n / 16);
    ft_putchar(hex_base[n % 16]);
}
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
void	ft_putstr(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	calculate_len_int(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (x < 0)
	{
		x = x * -1;
		write(1, "-", 1);
	}
	else if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else if (x >= 0 && x <= 9)
	{
		ft_putchar(x + 48);
	}
}
int calculate_hex_length(unsigned long n) {
    int length = 0;
    while (n > 0) {
        n /= 16;
        length++;
    }
    return length ? length : 1;
}