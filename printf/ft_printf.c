/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassane <fhassane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:52:43 by fhassane          #+#    #+#             */
/*   Updated: 2024/12/09 19:53:38 by fhassane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_functions.h"

int	ft_printf(const char *format, ...)
{
	int		return_value;
	va_list	args;
	int		x;
	char	f;
	char	*str;
	int	*ptr;

	return_value = 0;
	va_start(args, format);
	if (format[0] == '%' && format[1] == 'd' && format[2] == '\0')
	{
		x = va_arg(args, int);
		ft_putnbr(x);
		return_value = calculate_len_int(x);
	}
	if (format[0] == '%' && format[1] == 'i' && format[2] == '\0')
	{
		x = va_arg(args, int);
		ft_putnbr(x);
		return_value = calculate_len_int(x);
	}
	else if (format[0] == '%' && format[1] == 'c' && format[2] == '\0')
	{
		f = va_arg(args, int);
		ft_putchar(f);
		return_value = 1;
	}
	else if (format[0] == '%' && format[1] == 's' && format[2] == '\0')
	{
		str = va_arg(args, char*);
	    ft_putstr(str);
   		 return_value = ft_strlen(str);
	}
	else if (format[0] == '%' && format[1] == 'p' && format[2] == '\0')
	{
		ptr = va_arg(args, int *);
		//ft_putstr("0x");
		//ft_putnbr_hex (ptr);
		ft_putnbr(ptr);
		return_value = 2;
		return_value += calculate_hex_length((unsigned long)ptr);
	}
	va_end(args);
	return (return_value);
}
int	main(void)
{
	int		x;
	int	y;
	char	c;
	char	*str;
	char	*str2 = "Hello";
	int	t;
	t = 00000042;

	str2 = "Hello";
	x = ft_printf("%p", str2);
	//y = printf("%p",str2);
	//printf("\n%s%d","The return value of ft is equal to = ", x);	
 	//printf("\n%s%d","The return value of printf is equal to = ", y);
	printf("%p", str2);
}