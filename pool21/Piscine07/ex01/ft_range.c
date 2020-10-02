/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 11:05:02 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/21 21:25:55 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tmp;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	tmp = (int*)malloc(sizeof(*tmp) * (max - min));
	while (min < max)
	{
		tmp[i] = min;
		i++;
		min++;
	}
	return (tmp);
}
