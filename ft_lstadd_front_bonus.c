/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:35:39 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 12:33:03 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// //////////////////
// int	main(void)
// {
// 	t_list *head = NULL;
// 	char *el1 = (char *)ft_lstnew("abcd");
// 	char *el2 = (char *)ft_lstnew("efgh");
// 	char *el3 = (char *)ft_lstnew("ijkl");
// 	ft_lstadd_front(&head, el1);
// 	ft_lstadd_front(&head, el2);
// 	ft_lstadd_front(&head, el3);
// 	printf("%s", (char *)ft_lstlast((head)->content));
// }