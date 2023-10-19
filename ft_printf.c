/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:55:24 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/19 15:59:40 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_types(va_list arg, const char *type, int *c)
{
	if (*type == 'c')
		ft_printchar(va_arg(arg, int), c);
	if (*type == 's')
		ft_printstr(va_arg(arg, char *), c);
	/*if (*type == 'd')
		ft_printdec(va_arg(arg, int), c);
	if (*type == 'i' || type == 'd')
		ft_printnum(va_arg(arg, int), c);
	if (*type == 'u')
		ft_printuns(va_arg(arg, unsigned int), c);
	if (*type == 'x' || type == 'X')
		ft_printhexa(va_arg(arg, int), c); */
	if (*type == 'p')
		ft_printpvoid(va_arg(arg, unsigned int), c);
	/* if (*type == '%')
		fr_printchar('%', c);  */
	}

int ft_printf(const char *format, ...)
{
	va_list arg;
	int	c;

	c = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format != '%')
		{
			c += write(1, format, 1);
		}	
		else
		{
			format++;
			ft_types(arg, format, &c);
		}
		format++;
	}
	va_end(arg);
	return (c);
}

int main(void)
{
	char	*a = "ss";
	ft_printf(" nicole %s\n", a);
	printf(" nicole %s\n", a);
	return (0);
}