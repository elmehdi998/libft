/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:36:03 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/09 14:11:06 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int	main(void)
// {
// 	// Création de la liste
// 	t_list *liste = NULL;
// 	t_list *element1 = malloc(sizeof(t_list));
// 	t_list *element2 = malloc(sizeof(t_list));
// 	t_list *element3 = malloc(sizeof(t_list));

// 	// Initialisation des éléments
// 	element1->content = "Premier";
// 	element1->next = element2;

// 	element2->content = "Deuxième";
// 	element2->next = element3;

// 	element3->content = "Troisième";
// 	element3->next = NULL;

// 	// Point de départ de la liste
// 	liste = element1;

// 	// Test de la fonction
// 	int taille = ft_lstsize(liste);
// 	printf("Taille de la liste : %d\n", taille); // Devrait afficher 3

// 	// Libération de la mémoire
// 	free(element1);
// 	free(element2);
// 	free(element3);

// 	return (0);
// }