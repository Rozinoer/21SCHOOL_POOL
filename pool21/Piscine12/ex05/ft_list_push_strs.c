/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:33:28 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/27 20:00:08 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(char *data)
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *list;
	t_list *list1;

	list = 0;
	while (--size >= 0)
	{
		list1 = list;
		list = ft_create_elem(strs[i++]);
		list->next = list1;
	}
	return (list);
}
