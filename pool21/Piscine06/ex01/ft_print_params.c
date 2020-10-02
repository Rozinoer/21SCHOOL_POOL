/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 12:23:13 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/19 22:44:03 by dmyesha          ###   ########.fr       */
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
		ft_putstr(argv[i]);
		i++;
	}
}
