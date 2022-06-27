/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movenemy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:47:52 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/30 16:51:15 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up_enemy(t_so_long *struttura, int y, int x, int i)
{
	struttura->matrice[y][x] = '0';
	struttura->matrice[y - 1][x] = 'M';
	struttura->enemy_pos[i].y -= 1;
}

void	ft_move_down_enemy(t_so_long *struttura, int y, int x, int i)
{	
	struttura->matrice[y][x] = '0';
	struttura->matrice[y + 1][x] = 'M';
	struttura->enemy_pos[i].y += 1;
}

void	ft_movenemy(t_so_long *struttura)
{
	int	i;
	int	y;
	int	x;

	i = 0;
	while (i < struttura->count_enemy)
	{
		y = struttura->enemy_pos[i].y;
		x = struttura->enemy_pos[i].x;
		if (struttura->matrice[y - 1][x] != '0' &&
			struttura->enemy_pos[i].moves == 0)
			struttura->enemy_pos[i].moves = 1;
		else if (struttura->matrice[y + 1][x] != '0' &&
			struttura->enemy_pos[i].moves == 1)
			struttura->enemy_pos[i].moves = 0;
		if (struttura->enemy_pos[i].moves == 0 && struttura->matrice
			[y - 1][x] == '0')
			ft_move_up_enemy(struttura, y, x, i);
		else if (struttura->enemy_pos[i].moves == 1 && struttura->matrice
			[y + 1][x] == '0')
			ft_move_down_enemy(struttura, y, x, i);
		i++;
	}
}
