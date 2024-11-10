/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:12:04 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 21:38:42 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_ft(unsigned int i, char *s)
{
	if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
		*s += 13;
	else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
		*s -= 13;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int	main(void)
// {
// 	char	c[] = "ABC abc zxy ZXY";

// 	ft_striteri(c, ft_ft);
// 	printf("%s \n", c);
// }
