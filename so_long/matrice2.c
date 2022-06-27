/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:48:04 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/30 16:51:17 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_height(int fd)
{
	char	*str;
	int		i;

	i = 0;
	str = get_next_line(fd);
	while (str != NULL)
	{
		free(str);
		str = get_next_line(fd);
		i++;
	}
	free(str);
	return (i);
}

int	ft_width(int fd)
{
	char	*str;
	int		contatore;

	contatore = 0;
	str = get_next_line(fd);
	while (str[contatore] != '\0' && str[contatore] != '\n')
		contatore++;
	while (str != NULL)
	{
		free(str);
		str = get_next_line(fd);
	}
	free(str);
	return (contatore);
}

void	count_maps(char *str, int z, t_so_long *struttura)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		struttura->matrice[z][i] = str[i];
		if (str[i] == 'C')
			struttura->c++;
		if (str[i] == 'M')
			struttura->count_enemy++;
		i++;
	}
	struttura->matrice[z][i] = '\0';
}
