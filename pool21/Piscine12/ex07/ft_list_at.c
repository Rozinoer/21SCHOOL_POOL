/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 19:17:34 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/27 20:12:41 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*list;
	unsigned int		cout;

	cout = 1;
	list = begin_list;
	while (cout < nbr)
	{
		if (!list)
			return (0);
		list = list->next;
		cout++;
	}
	return (list);
}
