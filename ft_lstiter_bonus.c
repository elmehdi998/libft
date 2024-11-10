/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:18:24 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:11:47 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void	del(void *content)
// {
// 	free(content);
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cmp;

	if (!lst || !f)
		return ;
	cmp = lst;
	while (cmp)
	{
		f(cmp->content);
		cmp = cmp->next;
	}
}

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
// 	ft_lstiter(head, fct); // Modifier toute la liste depuis le début
// 	current = head;
// 	while (current)
// 	{
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	return (0);
// }
