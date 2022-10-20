/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:04:31 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/24 14:04:21 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss2 = (unsigned char *)s2;
	ss1 = (unsigned char *)s1;
	while (i < n)
	{
		if (ss2[i] != ss1[i])
			return ((int)(ss1[i] - ss2[i]));
		i++;
	}
	return (0);
}
