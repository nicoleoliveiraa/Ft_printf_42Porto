/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpvoid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:29:43 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/19 15:59:16 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void    ft_getadress(unsigned int num, int *c)
{
    char    *hexa;

    hexa = "0123456789abcdef";
    if (num >= 16)
        ft_getadress(num / 16, c);
    *c += write(1, &hexa[num % 16], 1);
}

void    ft_printpvoid(unsigned int num, int *c)
{
    if (!num)
    {
        *c += write(1, "(nil)", 5);
        return ;
    }
    *c += write(1, "0x", 2);
    ft_getadress(num, c);
}
