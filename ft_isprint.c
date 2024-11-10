/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:36:36 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 12:33:45 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char	s;

// 	s = '\n';
// 	printf("%d\n", ft_isprint(s));
// }
