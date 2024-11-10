/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:08:54 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 14:58:13 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ps1;
	unsigned const char	*ps2;
	size_t				i;

	i = 0;
	ps1 = s1;
	ps2 = s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[1] = "";
	char str2[1] = "";
	printf("%d\n", memcmp(str1, str2, 1));
	printf("%d\n", ft_memcmp(str1, str2, 1));
}*/