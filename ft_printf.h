/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:29:11 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/10/19 15:59:23 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <stdarg.h>

int ft_printf(const char *text, ...);
void	ft_printchar(int i, int *c);
void    ft_printpvoid(unsigned int num, int *c);
void	ft_printstr(char *str, int *c);

#endif
