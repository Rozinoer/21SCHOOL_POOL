/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 16:44:08 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/15 18:24:21 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str >= '0') && (*str <= '9'))
		{
			++str;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
