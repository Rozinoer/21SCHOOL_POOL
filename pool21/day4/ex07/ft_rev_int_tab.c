/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 21:08:53 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/14 21:24:05 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int size1 = 0;
	int tab1[size];
	while (size >= 0)
	{
		tab1[size-1] = tab[size1];
		size--;
		size1++;
	}
    printf("%s",tab1);
}

int main()
{	
	int size = 3;
	int tab[size];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	ft_rev_int_tab(tab, size);

}
