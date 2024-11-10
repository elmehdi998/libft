/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:12:25 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 18:18:27 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest >= dstsize)
		return (len_src + dstsize);
	while (src[i] && len_dest + i < dstsize - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
// int	main(void)
// {
// 	char	s[] = "\0";
// 	char	d[4] = "abcd";
// 	printf(" ma propre fonction : %d \n", ft_strlcat(d, s, 0));
// 	printf(" ma propre fonction : %s \n", d);
// 	char	ss[] = "\0";
// 	char	dd[4] = "abcd";
// 	printf(" ma propre fonction : %d \n", strlcat(dd, ss, 0));
// 	printf(" ma propre fonction : %s \n", dd);

// 	// printf("%s\n",d);
// }
