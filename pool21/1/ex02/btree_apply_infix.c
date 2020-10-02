/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 19:52:33 by bjason            #+#    #+#             */
/*   Updated: 2020/08/28 20:34:07 by bjason           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree));
	if (new_node == 0)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->item = item;
	return (new_node);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_prefix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_prefix(root->right, applyf);
}
