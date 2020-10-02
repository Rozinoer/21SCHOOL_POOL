/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:27:48 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/13 21:30:23 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_out(int a, int b, int c, int d)
{
	char mas[2];
	char mass[2];

	mas[0] = '0' + a;
	mas[1] = '0' + b;
	mass[0] = '0' + c;
	mass[1] = '0' + d;
	if (a == 0 && b == 0 && c == 0 && d == 1)
	{
		write(1, "00 01", 2);
	}
	else
	{
		write(1, ", ", 2);
		write(1, &mas, 2);
		write(1, " ", 1);
		write(1, &mass, 2);
	}
}

void	ft_putchar1(int a, int b, int c, int d)
{
	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 9)
		{
			c = a;
			while (c < 10)
			{
				d = b + 1;
				while (d < 10)
				{
					ft_out(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	ft_putchar1(a, b, c, d);
	write(1, "\n", 1);
}

int		main(void)
{
	ft_print_comb2();
}
