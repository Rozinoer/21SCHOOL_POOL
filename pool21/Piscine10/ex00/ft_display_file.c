/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:58:39 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/25 19:37:15 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *filename)
{
	int		file;
	char	str;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &str, 1))
		write(1, &str, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
