/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:11:22 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/16 18:37:43 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (y >= j)
	{
		while (x >= i)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == y && y != 1))
				ft_putchar('A');
			else if ((j == 1 || j == y) && i != 1 && i != x)
				ft_putchar('B');
			else if ((i == x && j == 1) || ((i == x && j == y)))
				ft_putchar('C');
			else if (j != 1 && i != 1 && i != x && j != y)
				ft_putchar(' ');
			else if (j != 1 && j != y && (i == 1 || i == x))
				ft_putchar('B');
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_print(x, y);
}
