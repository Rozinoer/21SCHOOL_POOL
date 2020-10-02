/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:39:01 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/17 16:31:06 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int num;
	int counter;

	num = 0;
	counter = 0;
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			counter++;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	if (counter % 2 == 0)
		return (num);
	else
		return (num * (-1));
}
