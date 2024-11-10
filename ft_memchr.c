/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:08:46 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 14:56:13 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	size_t				i;

	str = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s[] = "ab5cd";
	char c = 'c';
	char *result = ft_memchr(s, c, 3);
	if (result)
		printf("%s\n", result);
	else
		printf("c not found\n");
}*/