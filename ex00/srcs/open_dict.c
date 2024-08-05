/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:31:10 by liulm             #+#    #+#             */
/*   Updated: 2024/08/04 17:23:08 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	write_word_only(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	open_dictionary(int takeline, int hun_unde)
{
	int		fd;
	int		i;
	char	str[691];
	char	c;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error");
	}
	else if (fd >= 0 && hun_unde == 0)
	{
		while (read(fd, &c, 691))
		{
			str[i] = c;
			write_word_only(str);
			takeline -= takeline;
			i++;
		}
	}
	close(fd);
}

// open
// read
// et prendre la ligne demandee et ecrite le mot
// takeline correspond a la ligne souhaitee
