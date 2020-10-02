/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:26:58 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/13 21:28:35 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c)
{
	char mas[3];

	mas[0] = '0' + a;
	mas[1] = '0' + b;
	mas[2] = '0' + c;
	if (a == 0 && b == 1 && c == 2)
	{
		write(1, "012", 3);
	}
	else
	{
		write(1, ", ", 2);
		write(1, &mas, 3);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = 1;
		while (b <= 8)
		{
			c = 2;
			while (c <= 9)
			{
				if (a < b && b < c)
				{
					ft_putchar(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	ft_print_comb();
}
