/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 18:55:12 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/28 20:54:55 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *btree;

	btree = 0;
	tree = (t_btree*)malloc(sizeof(t_btree));
	if (btree)
	{
		tree->item = item;
		tree->left = 0;
		tree->right = 0;
	}
	return (btree);
}
