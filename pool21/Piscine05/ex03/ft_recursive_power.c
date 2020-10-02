/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 11:09:09 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/18 16:17:39 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
    if  (nb == 0)
            return (0);
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
    printf("%d",ft_recursive_power(423, 259999));
}
