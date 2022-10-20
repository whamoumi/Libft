/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:04:30 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/30 09:33:17 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_word(const char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char		*copy_word(const char *str, char c)
{
	int		i;
	char	*copy;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(copy = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		y;
	int		i;

	if (!(res = malloc(sizeof(char *) * count_word(s, c) + 1)))
		return (NULL);
	i = 0;
	y = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			res[y] = copy_word((&s[i]), c);
			y++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	res[y] = 0;
	return (res);
}
