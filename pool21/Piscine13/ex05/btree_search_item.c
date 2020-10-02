/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 21:03:59 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/28 21:05:06 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"


void *btree_search_item(t_btree *root, void *data_ref, 
		int (*cmpf)(void *, void *))
{
    void r;
    L
    if (root)
    {
        btree_search_item(root->left, data_ref, cmpf);
        if(cmpf(root->item, data_ref))
            
         btree_search_item(root->right, data_ref, cmpf);
    }
}
