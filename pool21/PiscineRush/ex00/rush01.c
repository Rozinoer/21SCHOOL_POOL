/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:10:21 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/16 18:49:09 by dmyesha          ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == x && j == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((j == 1 || j == y) && i != 1 && i != x)
				ft_putchar('*');
			else if ((i == x && j == 1) || ((i == 1 && j == y)))
				ft_putchar('\\');
			else if (j != 1 && i != 1 && i != x && j != y)
				ft_putchar(' ');
			else if (j != 1 && j != y && (i == 1 || i == x))
				ft_putchar('*');
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
