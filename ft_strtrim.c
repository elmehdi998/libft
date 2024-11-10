/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:14:56 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 21:58:47 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	ft_ischar(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_first(char const *s, char const *c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (ft_ischar(c, s[i]))
			count++;
		if (!ft_ischar(c, s[i]))
			break ;
		i++;
	}
	return (count);
}

static int	ft_last(char const *s, char const *c)
{
	int	len;
	int	count;

	len = ft_strlen(s) - 1;
	count = 0;
	while (s[len] > 0)
	{
		if (ft_ischar(c, s[len]))
			count++;
		if (!ft_ischar(c, s[len]))
			break ;
		len--;
	}
	return (count);
}

static char	*ft_create_trim(const char *s1, int first_i, int last_i, int lens1)
{
	char	*trim;
	int		i;

	if (lens1 <= first_i + last_i)
	{
		trim = malloc(sizeof(char));
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	i = 0;
	trim = malloc(sizeof(char) * (lens1 - first_i - last_i + 1));
	if (!trim)
		return (NULL);
	while (s1[i + first_i] && i < lens1 - last_i - first_i)
	{
		trim[i] = s1[i + first_i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	last_i;
	int	first_i;
	int	lens1;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	lens1 = ft_strlen(s1);
	if (lens1 == 0)
		return (ft_create_trim(s1, 0, 0, lens1));
	first_i = ft_first(s1, set);
	if (first_i == lens1)
		return (ft_create_trim(s1, first_i, 0, lens1));
	last_i = ft_last(s1, set);
	return (ft_create_trim(s1, first_i, last_i, lens1));
}
// int	main(void)
// {
// 	char const	s[] = "ababaabaababab";
// 	char const	c[] = "ab";

// 	// printf("%d", ft_first(s,c));
// 	// printf("%d", ft_last(s,c));
// 	printf("%s \n", ft_strtrim(s, c));
// }

// SRC  BAHELLO A WORDA
// WORD  ABcdef
// 2
// 1
// result : HELLO A WORD
