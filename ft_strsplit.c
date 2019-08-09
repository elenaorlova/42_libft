/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:26:17 by ashari            #+#    #+#             */
/*   Updated: 2019/04/13 12:26:24 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_letters(char const *s, int i, char c)
{
	int				result_value;

	result_value = 0;
	while (s[i + 1] != c && s[i] != '\0')
	{
		result_value++;
		i++;
	}
	return (result_value + 1);
}

static int			count_words(char const *s, char c)
{
	int				result_value;
	int				index;

	result_value = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			result_value++;
		index++;
	}
	return (result_value + 1);
}

static int			skip_char(int i, char const *s, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	int				i1;
	int				i;
	int				j;
	char 			**new;

	i1 = -1;
	i = 0;
	if (s == NULL ||
		!(new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (++i1 < (count_words(s, c) - 1))
	{
		i = skip_char(i, s, c);
		while (s[i] != c && s[i] != '\0')
		{
			j = -1;
			if (!(new[i1] = (char *)malloc(sizeof(char) * count_letters(s, i, c))))
				return (NULL);
			while (s[i] != c && s[i])
				new[i1][++j] = s[i++];
			new[i1][++j] = '\0';
		}
	}
	new[i1] = NULL;
	return (new);
}
