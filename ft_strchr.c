/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:11:49 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 15:01:20 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cd;
	int		i;

	cd = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cd)
			return ((char *)&s[i]);
		i++;
	}
	if (cd == '\0')
		return ((char *)&s[i]);
	return (0);
}
// int	main(void)
// {
// 	char	s[] = "abcdbbbbabbbba";
// 	char	c;

// 	c = 's';
// 	printf("%s\n", ft_strchr(s, c));
// }
