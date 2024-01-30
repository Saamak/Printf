/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:47:12 by amalangi          #+#    #+#             */
/*   Updated: 2023/11/15 21:12:36 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
#include <stdarg.h>

int		ft_printf(const char *s, ...);
int		is_letter_usable(char c);
void	print_it(char it, va_list bob);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);

#endif
