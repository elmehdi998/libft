/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:12:33 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:08:59 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while ((dstsize - 1) > i && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "ABCDEF";
// 	char	dest[20] = "hello";

// 	ft_strlcpy(dest, src, sizeof(dest));
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// }

// SRC = ABCDEF
// dest []= '12356454';== > 'AB'
// 3
