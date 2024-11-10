/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:07:18 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 11:51:16 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	r;
	int	s;
	int	i;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
// int	main(void)
// {
// 	printf("test 1\n");
// 	char str[] = "    +-+4653a";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	printf("test 2\n");
// 	char str2[] = "   + 4  653a";
// 	printf("%d\n", ft_atoi(str2));
// 	printf("%d\n", atoi(str2));
// 	printf("test 3\n");
// 	char str3[] = "  -4653a";
// 	printf("%d\n", ft_atoi(str3));
// 	printf("%d\n", atoi(str3));
// 	printf("test 4\n");
// 	char str4[] = " 44653a";
// 	printf("%d\n", ft_atoi(str4));
// 	printf("%d\n", atoi(str4));
// }