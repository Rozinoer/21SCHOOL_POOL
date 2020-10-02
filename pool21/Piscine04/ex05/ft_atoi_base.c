/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:33:19 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/18 16:33:21 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return (i);
}

void    ft_putchar(int c, int base, char *alf)
{
    char temp;

    temp = alf[c % base];
    write(1, &temp, 1);
}

int        ft_check(char *base)
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

int        ft_atoi(char *str, int base, char *alf)
{
    int num;
    int counter;

    num = 0;
    counter = 0;
    while (*str && (*str == ' ' || *str == '\t'))
        str++;
    while (*str == 45 || *str == 43)
    {
        if (*str == 45)
            counter++;
        str++;
    }
    while (*str && (*str >= *alf && *str <= *(alf + base)))
    {
        num = num * base + (*str - 48);
        str++;
    }
    if (counter % 2 == 0)
        return (num);
    else
        return (num * (-1));
}

int        ft_atoi_base(char *str, char *base)
{
    int check;
    
    check = ft_check(base);
    if (check)
    {
        ft_atoi(str, ft_strlen(base),base);
    }
}

int main()
{
    char *base = "0123456789";
    char *test = "   ----+++--++123";
    ft_atoi_base(test, base);
    
}
