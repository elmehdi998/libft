/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:35:44 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 12:32:58 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

// //////////////////////////

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
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
// 	char	*el1;
// 	char	*el2;
// 	char	*el3;
// 	char	*str;
// 	t_list	*current;

// 	head = NULL;
// 	el1 = "abcd";
// 	el2 = "efgh";
// 	el3 = "ijkl";
// 	str = "123";
// 	ft_lstadd_front(&head, ft_lstnew(el1));
// 	ft_lstadd_front(&head, ft_lstnew(el2));
// 	ft_lstadd_front(&head, ft_lstnew(el3));
// 	ft_lstadd_back(&head, ft_lstnew(str));
// 	current = head;
// 	while (current)
// 	{
// 		printf("%s", current->content);
// 		current = current->next;
// 	}
// }
