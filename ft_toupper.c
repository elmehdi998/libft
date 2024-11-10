/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:15:34 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:05:47 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
// int	main(void)
// {
// 	char str[] = "el Mehdi";
// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		printf("%c", ft_toupper(str[i]));
// 		i++;
// 	}
// 	printf("%s", "\n");
// 	return (0);
// }