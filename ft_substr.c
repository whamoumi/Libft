/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:43:28 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/29 13:21:19 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*res;
	unsigned	y;

	y = ft_strlen(s);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > y)
	{
		res[0] = '\0';
		return (res);
	}
	i = 0;
	while (i < len && s[start])
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[len] = '\0';
	return (res);
}
