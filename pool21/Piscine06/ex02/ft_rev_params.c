/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 12:46:22 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/20 18:02:45 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int i;

	(void)argc;
	i = 1;
	while (argv[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		i--;
	}
}
