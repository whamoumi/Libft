/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:05:42 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/24 13:44:04 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		y;

	if (!(res = malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = -1;
	y = 0;
	while (s1[++i])
		res[y++] = s1[i];
	i = -1;
	while (s2[++i])
		res[y++] = s2[i];
	res[y] = '\0';
	return (res);
}
