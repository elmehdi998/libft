/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:14:11 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/10 22:05:12 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	count_word(const char *s, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
		{
			word = 0;
		}
		i++;
	}
	return (count);
}

int	len_word(const char *s, char c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*allocate_word(const char *s, int len)
{
	char	*word;
	int		i;

	if (!s || len < 0)
		return (NULL);
	i = 0;
	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_split(char **arr, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**p;
	int		words;
	int		j;
	int		lenw;

	words = count_word(s, c);
	p = (char **)malloc((words + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	j = 0;
	while (*s && j < words)
	{
		while (*s && *s == c)
			s++;
		lenw = len_word(s, c);
		p[j] = allocate_word(s, lenw);
		if (!p[j])
			return (free_split(p, j));
		s += lenw;
		j++;
	}
	p[j] = '\0';
	return (p);
}

// void	print_split(char **result)
// {
// 	for (int i = 0; result[i]; i++)
// 	{
// 		printf("[%s]\n", result[i]);
// 	}
// }

// int	main(void)
// {
// 	char	**result;

// 	// الاختبار 1: تقسيم نص بسيط
// 	printf("Test 1:\n");
// 	result = ft_split("Hello world", ' ');
// 	print_split(result);
// 	free(result[0]);
// 	free(result[1]);
// 	free(result);
// 	// الاختبار 2: نص بدون فواصل
// 	printf("Test 2:\n");
// 	result = ft_split("Hello", ' ');
// 	print_split(result);
// 	free(result[0]);
// 	free(result);
// 	// الاختبار 3: نص بفواصل متتالية
// 	printf("Test 3:\n");
// 	result = ft_split("Hello  world", ' ');
// 	print_split(result);
// 	free(result[0]);
// 	free(result[1]);
// 	free(result);
// 	// الاختبار 4: نص بفاصل في البداية والنهاية
// 	printf("Test 4:\n");
// 	result = ft_split("  Hello world  ", ' ');
// 	print_split(result);
// 	free(result[0]);
// 	free(result[1]);
// 	free(result);
// 	// الاختبار 5: نص فارغ
// 	printf("Test 5:\n");
// 	result = ft_split("", ' ');
// 	print_split(result); // يجب أن تطبع لا شيء
// 	free(result);
// 	return (0);
// }
