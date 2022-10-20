/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:00:50 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/29 15:41:33 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_strin(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1[i] == 0 || set[i] == 0)
		return (res = malloc(0));
	while (s1[i] && (ft_strin(s1[i], set) == 1))
		i++;
	while (j && (ft_strin(s1[j], set) == 1))
		j--;
	res = ft_substr(s1, i, (j - i + 1));
	return (res);
}
