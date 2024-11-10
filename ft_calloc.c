/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:07:30 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 10:34:32 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	tmp = malloc(count * size);
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = ft_calloc(5, sizeof(int));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d \n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }
