/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:36:00 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:11:17 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	// Test 1 : Création d'un nouvel élément de liste
// 	int value = 42;
// 	t_list *element = ft_lstnew(&value);
// 	if (element == NULL)
// 	{
// 		printf("Erreur d'allocation mémoire\n");
// 		return (1);
// 	}
// 	printf("Contenu de l'élément : %d\n", *(int *)element->content);
// 	printf("Pointeur next : %p\n", element->next);
// 	free(element);

// 	// Test 2 : Création d'un élément de liste avec contenu NULL
// 	// element = ft_lstnew(NULL);
// 	// if (element == NULL) {
// 	//     printf("Erreur d'allocation mémoire\n");
// 	//     return (1);
// 	// }
// 	// printf("Contenu de l'élément : %p\n", element->content);
// 	// printf("Pointeur next : %p\n", element->next);
// 	// free(element);

// 	// // Test 3 : Allocation de mémoire échouée
// 	// void *(*old_malloc)(size_t) = malloc;
// 	// malloc = NULL;
// 	// element = ft_lstnew(&value);
// 	// if (element == NULL) {
// 	//     printf("Erreur d'allocation mémoire\n");
// 	// } else {
// 	//     printf("Contenu de l'élément : %d\n", *(int *)element->content);
// 	//     printf("Pointeur next : %p\n", element->next);
// 	//     free(element);
// 	// }
// 	// malloc = old_malloc;

// 	printf("Fin du programme\n");
// 	return (0);
// }