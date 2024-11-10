/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:03:18 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:37:17 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*liste;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	liste = NULL;
	tmp = lst;
	while (tmp)
	{
		new = ft_lstnew(f(tmp->content));
		if (!new)
		{
			ft_lstclear(&liste, del);
			return (NULL);
		}
		ft_lstadd_back(&liste, new);
		tmp = tmp->next;
	}
	return (liste);
}
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*crt;
// 	t_list	*mod;

// 	head = NULL;
// 	node1 = ft_lstnew("abc");
// 	node2 = ft_lstnew("abce");
// 	node3 = ft_lstnew("ab");
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	crt = head;
// 	while (crt)
// 	{
// 		printf("%s ", crt->content);
// 		crt = crt->next;
// 	}
// 	mod = ft_lstmap(head, transform_content, del);
// 	while (mod)
// 	{
// 		printf("%s", mod->content);
// 		mod = mod->next;
// 	}
// 	return (0);
// }
