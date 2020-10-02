/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:53:40 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/25 12:43:08 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cat(char *filename1, char *filename2)
{

}

void	ft_display(char *filename)
{
	int	file;
	char str;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &str, 1)
			write(1, &str, 1);
	close(file);

int		main(int argc, char **argv)
{
	ft_display(argv[1]); 
}
