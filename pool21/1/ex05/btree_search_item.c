/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjason <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 20:59:47 by bjason            #+#    #+#             */
/*   Updated: 2020/08/28 21:13:40 by bjason           ###   ########.fr       */
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

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *go_out;

	go_out = NULL;
	if (root)
	{
		go_out = btree_search_item(root->left, data_ref, cmpf);
		if (!go_out && !((*cmpf)(root->item, data_ref)))
			go_out = root->item;
		if (!go_out)
			go_out = btree_search_item(root->right, data_ref, cmpf);
	}
	return (go_out);
}
