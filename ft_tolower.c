/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:15:21 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:05:42 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
// int	main(void)
// {
// 	char str[] = "el mEHDI";
// 	int i = 0;
// 	while (str[i])
// 	{
// 		printf("%c", ft_tolower(str[i]));
// 		i++;
// 	}
// 	printf("%s", "\n");
// 	return (0);
// }