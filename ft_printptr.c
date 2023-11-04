/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:32:59 by emencova          #+#    #+#             */
/*   Updated: 2023/11/04 14:31:52 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_print_char(char c);

static int	ft_countptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	while (ptr != 0)
	{
		count++;
		ptr = ptr / 16;
	}
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr (ptr / 16);
		ft_putptr (ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_print_char(ptr + 48);
		else
			ft_print_char(ptr - 10 + 'a');
	}
	return (ft_countptr(ptr));
}

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += write (1, "(nil)", 5);
		return (len);
	}
	len = write (1, "0x", 2);
	len += ft_putptr(ptr);
	return (len);
}
