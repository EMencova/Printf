/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:08:25 by emencova          #+#    #+#             */
/*   Updated: 2023/11/04 14:30:37 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_printstr(char *str);

int	ft_unlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_untoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_unlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (num == 0)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len --;
	}
	return (num);
}

int	ft_printunsigned(unsigned int n)
{
	int		printlen;
	char	*num;

	printlen = 0;
	if (n == 0)
		printlen += write(1, "0", 1);
	else
	{
		num = ft_untoa(n);
		printlen += ft_printstr(num);
		free(num);
	}
	return (printlen);
}
