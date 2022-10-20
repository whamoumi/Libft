/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:59:55 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/29 12:05:13 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*srcc;
	unsigned char	*destt;
	unsigned int	i;

	i = 0;
	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	while (i < n)
	{
		destt[i] = srcc[i];
		if (srcc[i] == (unsigned char)c)
			return (&destt[i + 1]);
		i++;
	}
	return (NULL);
}
