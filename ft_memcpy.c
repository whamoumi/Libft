/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:05:57 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/29 14:51:27 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*desst;
	unsigned char	*srcc;

	desst = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 0;
	if (desst == NULL && srcc == NULL)
		return (desst);
	while (i < n)
	{
		desst[i] = srcc[i];
		i++;
	}
	return (desst);
}
