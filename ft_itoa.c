/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:08:40 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 11:12:20 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizen(int nb)
{
	int		count;
	long	n;

	count = 0;
	n = nb;
	if (nb == 0)
		count = 1;
	if (nb < 0)
	{
		n = -(long)nb;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_fill(char *str, int nb, int len)
{
	long	n;

	n = nb;
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	if (nb < 0)
	{
		str[0] = '-';
		n = -(long)nb;
	}
	str[len] = '\0';
	len--;
	while (n != 0)
	{
		str[len] = n % 10 + 48;
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int nb)
{
	int		size_n;
	char	*str;

	size_n = ft_sizen(nb);
	str = malloc((size_n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_fill(str, nb, size_n);
	return (str);
}
// int	main(void)
// {
// 	int n = 10006;
// 	// printf("%ld \n",n);
// 	printf("%s \n", ft_itoa(n));
// }