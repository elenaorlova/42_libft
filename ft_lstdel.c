/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:20:54 by ashari            #+#    #+#             */
/*   Updated: 2019/04/08 22:30:36 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*next_list_in_source;
	t_list			*source_list;

	if (alst && del != NULL)
	{
		source_list = *alst;
		while (source_list)
		{
			next_list_in_source = source_list->next;
			del(source_list->content, source_list->content_size);
			free(source_list);
			source_list = next_list_in_source;
		}
		*alst = NULL;
	}
}
