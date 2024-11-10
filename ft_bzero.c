/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:34:45 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 10:34:03 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char	str[] = "elmehdi";
// 	int		i;

// 	printf("%s\n", str);
// 	ft_bzero(str + 3, 2);
// 	// el /0/0hdi
// 	i = 0;
// 	while (i < sizeof(str))
// 	{
// 		printf("%c\n", str[i]);
// 		i++;
// 	}
// }
