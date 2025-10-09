/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:32:11 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/09 10:32:13 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> 

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_display_file(char *string)
{
	int		file_ptr;
	char	c;

	file_ptr = open(string, O_RDONLY, 0);
	if (file_ptr == -1)
		ft_putstr("Cannot read file.\n");
	while (read(file_ptr, &c, 1) == 1)
		ft_putchar(c);
	close(file_ptr);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc == 2)
		ft_display_file(argv[1]);
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
