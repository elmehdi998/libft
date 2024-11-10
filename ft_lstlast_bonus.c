/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:35:56 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:12:30 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int	main(void)
// {
// 	t_list *head = NULL;
// 	char *el1 = "abcd";
// 	char *el2 = "efgh";
// 	char *el3 = "ijkl";
// 	ft_lstadd_front(&head, ft_lstnew(el1));
// 	ft_lstadd_front(&head, ft_lstnew(el2));
// 	ft_lstadd_front(&head, ft_lstnew(el3));
// 	t_list *last = ft_lstlast(head);
// 	printf("%s \n", (char *)last->content);
// }