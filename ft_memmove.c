/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:17:36 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/29 15:08:30 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	return (dst);
}