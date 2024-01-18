/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:59:25 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/20 12:58:47 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printuns(unsigned int num, int *c)
{
	while (num >= 10)
	{
		ft_printnum(num / 10, c);
		num = num % 10;
	}
	ft_printchar(num + '0', c);
}
