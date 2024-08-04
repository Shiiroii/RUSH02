/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:24:18 by htrapp            #+#    #+#             */
/*   Updated: 2024/08/04 12:56:37 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		length_checker(argv[1]);
	}
	else if (argc == 3)
	{
		ft_putstr("a changer");
	}
	else
		write(1, "Error", 5);
}
