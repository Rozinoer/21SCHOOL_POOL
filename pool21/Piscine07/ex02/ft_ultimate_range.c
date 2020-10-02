/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:52:23 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/21 21:28:04 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	*range = (int*)malloc(sizeof(**range) * (max - min));
	while (max > min)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
