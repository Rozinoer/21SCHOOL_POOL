/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 19:05:09 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/27 20:02:31 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *list;
	t_list *list1;

	list = begin_list;
	while (list)
	{
		free_fct(list->data);
		list1 = list;
		list = list->next;
		free(list1);
	}
}
