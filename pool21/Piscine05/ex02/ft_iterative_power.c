/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 10:54:32 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/18 16:16:24 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int count;

	count = 1;
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	while (power >= 1)
	{
		count = count * nb;
		power--;
	}
	return (count);
}
