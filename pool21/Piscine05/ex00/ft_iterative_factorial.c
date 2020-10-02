/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 09:56:46 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/18 16:12:59 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_factorial(int i, int nb)
{
	int count;

	count = 1;
	while (i <= nb)
	{
		count = count * i;
		i++;
	}
	return (count);
}

int		ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1 || nb == 2)
		return (nb);
	return (ft_factorial(2, nb));
}
