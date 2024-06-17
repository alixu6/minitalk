/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:04:06 by axu               #+#    #+#             */
/*   Updated: 2024/03/15 09:15:59 by axu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_nbr(int nb);
int	ft_print_unsigned(unsigned int d);
int	ft_print_hex(unsigned int nb, const char format);
int	ft_print_percent(void);

int	ft_len(unsigned long int nb);

#endif
