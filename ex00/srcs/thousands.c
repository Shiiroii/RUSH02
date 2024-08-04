/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thousands.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:03:50 by liulm             #+#    #+#             */
/*   Updated: 2024/08/03 16:06:48 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	thousands_to_undecillions(int nb, int loop, char *str)
{
	int	i;

	i = 0;
	if (ft_num_len(str) % 3 == 1)
		units(nb, str);
	if (ft_num_len(str) % 3 == 2)
		dozens(nb, str);
	while (i < loop)
	{
		hundreds(nb, str);
		i++;
	}
}
