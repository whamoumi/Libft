/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:45:53 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/29 15:32:24 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void *p;

	if (!(p = malloc(nmenb * size)))
		return (NULL);
	p = ft_memset(p, 0, (nmenb * size));
	return (p);
}
