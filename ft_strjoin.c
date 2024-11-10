/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:12:13 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 21:53:01 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char	*ft_check(const char *s1, const char *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}

static void	ft_allocate(char *new, const char *s1, const char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	char	*rstnull;

	if (!s1 || !s2)
	{
		rstnull = ft_check(s1, s2);
		if (rstnull)
			return (rstnull);
	}
	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_allocate(new, s1, s2);
	return (new);
}

// int	main(void)
// {
// 	char	s1[] = "";
// 	char	s2[] = "efgh";

// 	printf("%s \n", ft_strjoin(s1, s2));
// 	printf("%s \n", ft_strjoin(s1, s2));
// }
