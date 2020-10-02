/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 21:09:39 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/13 21:19:00 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_out(int dig, int num)
{
	char	mas[dig];
	int		a;
	int		b;
	int		dig1;

	dig1 = dig;
	dig--;
	a = num;
	b = a;
	while (dig >= 0)
	{
		a = a % 10;
		mas[dig] = '0' + a;
		b = (b - a) / 10;
		dig--;
		a = b;
	}
	write(1, &mas, dig1);
}

void	ft_putnbr(int nb)
{
	int num;
	int dig;

	dig = 0;
	num = nb;
	while (nb != 0)
	{
		dig++;
		nb = nb / 10;
	}
	ft_out(dig, num);
	write(1, "\n", 1);
}
