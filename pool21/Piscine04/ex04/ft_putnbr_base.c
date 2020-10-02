/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:35:51 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/18 09:54:19 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(int c, int base, char *alf)
{
	char temp;

	temp = alf[c % base];
	write(1, &temp, 1);
}

void	ft_putnbr(int nb, int base, char *alf)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', base, alf);
		ft_putchar('2', base, alf);
		ft_putnbr(147483648, base, alf);
	}
	else if (nb < 0)
	{
		ft_putchar('-', base, alf);
		ft_putnbr(-nb, base, alf);
	}
	else
	{
		if (nb >= base)
		{
			ft_putnbr(nb / base, base, alf);
		}
		ft_putchar(nb % base, base, alf);
	}
}

int		ft_check(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*(base + i) != '\0')
	{
		while (*(base + j) != '\0')
		{
			if (*(base + i) == *(base + j) ||
					*(base + i) == 45 ||
				*(base + i) == 43)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int check;

	check = ft_check(base);
	if (check)
	{
		ft_putnbr(nbr, ft_strlen(base), base);
	}
}
