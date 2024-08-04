/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:30:43 by liulm             #+#    #+#             */
/*   Updated: 2024/08/04 12:55:05 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	length_checker(char *str);
void	open_dictionary(int takeline, int hun_unde);
void	tenth(int nb, char *str);
void	thousands_to_undecillions(int nb, int loop, char *str);
int		ft_num_len(char *str);
void	units(int nb, char *str);
void	dozens(int nb, char *str);
void	hundreds(int nb, char *str);

#endif
