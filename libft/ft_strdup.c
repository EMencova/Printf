/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:46:07 by emencova          #+#    #+#             */
/*   Updated: 2023/10/21 14:57:53 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*s;
	size_t	i;

	s = ((char *)src);
	i = ft_strlen(s) + 1;
	dest = (char *)malloc(sizeof(*src) * i);
	if (!dest)
		return (0);
	return ((char *)ft_memcpy(dest, s, i));
}
/*int	main()
{
	char	str[] = "Hello";
	char	str1[] = "I hope you have a good day";
	char	str2[] = "Every day!";
	ft_putendl_fd(ft_strdup(str), 1);
	ft_putendl_fd(ft_strdup(str1), 1);
	ft_putendl_fd(ft_strdup(str2), 1);
}*/
