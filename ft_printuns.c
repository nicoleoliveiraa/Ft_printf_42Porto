/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:59:25 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/19 19:03:46 by nsouza-o         ###   ########.fr       */
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