/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:31:10 by liulm             #+#    #+#             */
/*   Updated: 2024/08/04 12:55:15 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	open_dictionary(int takeline, int hun_unde)
{
	int		fd;
	int		read_file;
	char	str[100];

	fd = open("../numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error");
	}
	else if (fd == 0 && hun_unde == 0)
	{
		read_file = read(fd, &str, takeline);
	}
}

// open
// read
// et prendre la ligne demandee et ecrite le mot
