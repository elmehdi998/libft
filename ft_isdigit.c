/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:36:07 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 12:33:32 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char	s;

// 	s = 'f';
// 	printf("%d", ft_isdigit(s));
// }
