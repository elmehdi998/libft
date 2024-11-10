/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:35:33 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:10:18 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

// void	del(void *content)
// {
// 	free(content);
// }
// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (!lst || !new)
// 		return ;
// 	new->next = *lst;
// 	*lst = new;
// }
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;

// 	head = NULL;
// 	node1 = ft_lstnew("str");
// 	node2 = ft_lstnew("str1");
// 	node3 = ft_lstnew("str2");
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	current = head;
// 	ft_lstclear(&head, del);
// 	current = head;
// 	while (current)
// 	{
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	return (0);
// }
