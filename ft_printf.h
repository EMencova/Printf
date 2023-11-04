/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:17:29 by emencova          #+#    #+#             */
/*   Updated: 2023/11/04 16:18:31 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);
int	ft_printhexa(unsigned int n, const char format);
int	ft_printunsigned(unsigned int n);
int	ft_printnbr(int n);

#endif
