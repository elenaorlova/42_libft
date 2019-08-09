/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:22:44 by ashari            #+#    #+#             */
/*   Updated: 2019/04/24 19:02:20 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_realloc(void *ptr, size_t size)
{
	void			*tmp;

	tmp = NULL;
	if (ptr && size > 0)
	{
		if (!(tmp = malloc(size)))
			return (ptr);
		tmp = ft_strcpy(tmp, ptr);
		free(ptr);
		ptr = tmp;
	}
	return (ptr);
}
