/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whamoumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:45:58 by whamoumi          #+#    #+#             */
/*   Updated: 2021/01/30 09:21:12 by whamoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *stock;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	else
	{
		stock = ft_lstlast(*alst);
		stock->next = new;
	}
}
