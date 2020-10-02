/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:51:39 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/21 22:14:44 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char	*ft_str(int size, char **strs, char *sep)
{
	char		*str;
	int			i;
	int			l;

	l = 0;
	i = 0;
	while (i < size)
	{
		l = l + ft_strlen(strs[i]);
		i++;
	}
	l = l + ft_strlen(sep) * (size - 1);
	if (size <= 0)
		l = 1;
	str = (char*)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (0);
	else
		return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*str;
	int				i;
	int				j;
	int				z;

	i = -1;
	z = 0;
	str = ft_str(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[z++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[z++] = sep[j];
			j++;
		}
	}
	str[z] = '\0';
	return (str);
}
