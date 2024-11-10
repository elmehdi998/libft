/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:35:53 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:10:42 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew("str");
// 	t_list *node2 = ft_lstnew("str1");
// 	t_list *node3 = ft_lstnew("str2");

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);

// 	t_list *current = head;
// 	while (current)
// 	{
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	printf("\n");

// 	ft_lstdelone(node2, del);
// 	current = head;
// 	while (current)
// 	{
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}

// 	return (0);
// }