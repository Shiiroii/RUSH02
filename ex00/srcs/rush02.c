/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:19:07 by liulm             #+#    #+#             */
/*   Updated: 2024/08/04 16:48:14 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

int	ft_num_len(char *str)
{
	int	num_len;

	num_len = ft_strlen(str);
	return (num_len);
}

void	units(int nb, char *str)
{
	if (str[0] == '0')
		open_dictionary(1, 0);
	if (str[nb] == '1')
		open_dictionary(2, 0);
	if (str[nb] == '2')
		open_dictionary(3, 0);
	if (str[nb] == '3')
		open_dictionary(4, 0);
	if (str[nb] == '4')
		open_dictionary(5, 0);
	if (str[nb] == '5')
		open_dictionary(6, 0);
	if (str[nb] == '6')
		open_dictionary(7, 0);
	if (str[nb] == '7')
		open_dictionary(8, 0);
	if (str[nb] == '8')
		open_dictionary(9, 0);
	if (str[nb] == '9')
		open_dictionary(10, 0);
	nb++;
}

void	dozens(int nb, char *str)
{
	if (str[nb] == '1')
		tenth(nb, &str[nb]);
	if (str[nb] == '2')
		open_dictionary(21, 0);
	if (str[nb] == '3')
		open_dictionary(22, 0);
	if (str[nb] == '4')
		open_dictionary(23, 0);
	if (str[nb] == '5')
		open_dictionary(24, 0);
	if (str[nb] == '6')
		open_dictionary(25, 0);
	if (str[nb] == '7')
		open_dictionary(26, 0);
	if (str[nb] == '8')
		open_dictionary(27, 0);
	if (str[nb] == '9')
		open_dictionary(28, 0);
	nb++;
	units(nb, str);
}

void	hundreds(int nb, char *str)
{
	if (str[nb] == '1')
		open_dictionary(2, 29);
	if (str[nb] == '2')
		open_dictionary(3, 29);
	if (str[nb] == '3')
		open_dictionary(4, 29);
	if (str[nb] == '4')
		open_dictionary(5, 29);
	if (str[nb] == '5')
		open_dictionary(6, 29);
	if (str[nb] == '6')
		open_dictionary(7, 29);
	if (str[nb] == '7')
		open_dictionary(8, 29);
	if (str[nb] == '8')
		open_dictionary(9, 29);
	if (str[nb] == '9')
		open_dictionary(10, 29);
}

void	length_checker(char *str)
{
	int	i;

	i = 0;
	if (ft_num_len(str) == 1)
		units(i, str);
	if (ft_num_len(str) == 2)
		dozens(i, str);
	if (ft_num_len(str) == 3)
		hundreds(i, str);
	if (ft_num_len(str) >= 4 && ft_num_len(str) <= 37)
		thousands_to_undecillions(i, (ft_num_len(str) / 3), str);
}

// thousands_to_undecillions --> gerer par centaines 1 | 1 2 3 | 1 2 3 | 1 2 3

// division par 3 pour savoir combien de fois on fait la boucle

// if (ft_num_len(str) >= 4 && ft_num_len <= 37) 37 pour les undecillions
