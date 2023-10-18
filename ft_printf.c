#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_types(char type, va_list arg)
{
	int c;

	c = 0;
	if (type == 'c')
		c += ft_printchar(va_arg(arg, int));
	if (type == 's')
		c += ft_printstr(va_arg(arg, char *));
	if (type == 'd')
		c += ft_printdec(va_arg(arg, int));
	if (type == 'i' || type == 'd')
		c += ft_printnum(va_arg(arg, int));
	if (type == 'u')
		c += ft_printuns(va_arg(arg, unsigned int));
	if (type == 'x' || type == 'X')
		c += ft_printhexa(va_arg(arg, int));
	if (type == 'p')
		c += ft_printadress(va_arg(arg, int));
	if (type == '%')
		c += fr_printchar('%');
	return (c);
}

int ft_printf(char *format, ...)
{
	va_list arg;
	int	c;
	int i;

	va_start(arg, format);
	c = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			c += ft_printchar(va_arg(arg, int));
		else
		{
			i++;
			c += ft_types(format[i], arg);
		}
		i++;
	}
	return (c);
}