/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 15:26:23 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/22 19:47:01 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int							ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = (char*)malloc(ft_strlen(src) + 1);
	if (dst == 0)
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct		s_stock_str		*ft_strs_tab_tab(int ac, char **av)
{
	t_stock_str		*s_av;
	int				i;

	if (!(s_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] != '\0' && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = av[i];
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[i].size = 0;
	s_av[i].str = 0;
	s_av[i].copy = 0;
	return (s_av);
}
