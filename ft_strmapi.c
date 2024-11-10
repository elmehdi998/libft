/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:13:32 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:05:04 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	ft_f(unsigned int i, char c)
{
	if (c == 'z')
	{
		return ('a');
	}
	else if (c == 'Z')
	{
		return ('A');
	}
	else if (c >= 'a' && c < 'z')
	{
		return (c + 1);
	}
	else if (c >= 'A' && c < 'Z')
	{
		return (c + 1);
	}
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s)
	{
		str[i] = f(i, *s);
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	const char *example1 = "";
// 	const char *example2 = "wAAAXAXZZ"; // xBBBYBYAA
// 	const char *example3 = "zzabcc";    // aabcdd

// 	char *result1 = ft_strmapi(example1, ft_f);
// 	char *result2 = ft_strmapi(example2, ft_f);
// 	char *result3 = ft_strmapi(example3, ft_f);

// 	printf("Result 1: %s\n", result1);
// 	// free(result1);

// 	printf("Result 2: %s\n", result2);
// 	//  free(result2);

// 	printf("Result 3: %s\n", result3);
// 	// free(result3);

// 	return (0);
// }