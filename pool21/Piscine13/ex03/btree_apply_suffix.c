/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 20:08:00 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/28 20:59:53 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*appplyf)(void*))
{
	if (root)
	{
		btree_apply_suffix(root->left, applyf);
		btree_aply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
