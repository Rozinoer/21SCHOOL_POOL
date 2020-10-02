/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:51:46 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/26 15:48:37 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
	}
}

int		ft_atoi(char *str)
{
	int num;
	int counter;
	int i;

	num = 0;
	i = 0;
	counter = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
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

void	ft_do(int operator, int num1, int num2)
{
	if (operator == 43)
		ft_putnbr(num1 + num2);
	else if (operator == 45)
		ft_putnbr(num1 - num2);
	else if (operator == 37)
	{
		if (num2 == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(num1 % num2);
	}
	else if (operator == 47)
	{
		if (num2 == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(num1 / num2);
	}
	else if (operator == 42)
	{
		ft_putnbr(num1 * num2);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int operator;

	operator = 0;
	if (argc != 4)
		return (0);
	if (*argv[2] == 43)
		ft_do(43, ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == 45)
		ft_do(45, ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == 47)
		ft_do(47, ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == 42)
		ft_do(42, ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (*argv[2] == 37)
		ft_do(37, ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
	{
		ft_putnbr(0);
		write(1, "\n", 1);
	}
}
