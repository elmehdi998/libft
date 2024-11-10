/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:37:30 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 14:53:58 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memover(unsigned char *d, unsigned char *s, size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
	return (d);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
		return (ft_memover(d, s, len));
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	d[len] = '\0';
	return (dst);
}
// int	main(void)
// {
// 	char	s[] = "abcdeftd";
// 	char	d[] = "abcdeftd";

// 	// ft_memmove(d,s,3);
// 	// printf("%s\n",d);
// 	printf("%s\n", ft_memmove(s + 3, s, 3));
// 	printf("%s\n", s);
// 	printf("%s\n", memmove(d + 3, d, 3));
// 	printf("%s\n", d);
// 	// printf("%s\n", memcpy(s+3,s,3));
// }

// overlaping
//  src  :  abcdefg
//          ababcfg
//  src     0123456
//  dst       01236
//
// ft_memcpy(src+3,src , 3)
//
// dest = src +3
