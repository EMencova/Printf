/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:57:37 by emencova          #+#    #+#             */
/*   Updated: 2023/11/04 16:21:36 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printhexa(unsigned int n, const char format)
{
	int		count;
	char	*tolower;
	char	*toupper;

	tolower = "0123456789abcdef";
	toupper = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_printhexa(n / 16, format);
		count += ft_printhexa(n % 16, format);
	}
	else
	{
		if (format == 'X')
			ft_print_char(toupper[n]);
		else if (format == 'x')
			ft_print_char(tolower[n]);
		++count;
	}
	return (count);
}
