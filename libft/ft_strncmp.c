/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:00:40 by emencova          #+#    #+#             */
/*   Updated: 2023/10/08 15:10:27 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*for my tests
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n--)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*s1;
	char	*s2;
	int	n;

	s1 = "hello";
	s2 = "hell";
	n = 5;

	printf("my function %d\n", ft_strncmp(s1, s2, n));

	printf("official function %d", strncmp(s1, s2, n));
	return (0);
}
*/
