/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:20:37 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/24 14:09:49 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned	char	*t;
	unsigned	int		i;

	i = 0;
	t = s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
