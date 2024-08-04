/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:54:50 by liulm             #+#    #+#             */
/*   Updated: 2024/08/04 12:47:06 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	tenth(int nb, char *str)
{
	if (str[nb + 1] == '0')
		open_dictionary(11, 0);
	if (str[nb + 1] == '1')
		open_dictionary(12, 0);
	if (str[nb + 1] == '2')
		open_dictionary(13, 0);
	if (str[nb + 1] == '3')
		open_dictionary(14, 0);
	if (str[nb + 1] == '4')
		open_dictionary(15, 0);
	if (str[nb + 1] == '5')
		open_dictionary(16, 0);
	if (str[nb + 1] == '6')
		open_dictionary(17, 0);
	if (str[nb + 1] == '7')
		open_dictionary(18, 0);
	if (str[nb + 1] == '8')
		open_dictionary(19, 0);
	if (str[nb + 1] == '9')
		open_dictionary(20, 0);
}
