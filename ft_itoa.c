/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:47:19 by ashari            #+#    #+#             */
/*   Updated: 2019/04/08 11:54:14 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int source_number)
{
	char			*result_number;
	char			inverse_number[11];
	int				sign;
	int				i;
	int				j;

	if (source_number == MIN_INTEGER)
		return (ft_strdup("-2147483648"));
	sign = source_number < 0 ? -1 : 1;
	i = 0;
	j = 0;
	while (sign * source_number > 9)
	{
		inverse_number[i++] = '0' + sign * (source_number % 10);
		source_number /= 10;
	}
	inverse_number[i++] = '0' + sign * source_number;
	if (sign == -1)
		inverse_number[i++] = '-';
	if (!(result_number = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	result_number[i] = '\0';
	while (i--)
		result_number[i] = inverse_number[j++];
	return (result_number);
}
