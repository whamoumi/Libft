/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:10:05 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/25 15:20:35 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n)
{
	int			size;
	long	int	nb;

	size = 0;
	nb = n;
	if (nb < 0)
	{
		size++;
		nb *= -1;
	}
	if (nb == 0)
		return (1);
	if (nb == -2147364748)
		return (11);
	while (nb > 0)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				i;
	int				size;
	long	int		nb;

	nb = n;
	size = ft_size(nb);
	i = size - 1;
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		res[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	res[size] = 0;
	return (res);
}
