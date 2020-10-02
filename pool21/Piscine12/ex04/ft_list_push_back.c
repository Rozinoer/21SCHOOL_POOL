/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:23:50 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/27 19:57:25 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = 0;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->next = 0;
		list->data = data;
	}
	return (list);
}

void		ft_list_push_back(t_list **begin_list, char *data)
{
	t_list *list;

	list = *begin_list;
	if (!list)
	{
		list = ft_create_elem(data);
	}
	else
	{
		while (list->next)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
}
