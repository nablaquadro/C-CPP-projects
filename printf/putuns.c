/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putuns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:22:11 by aceremig          #+#    #+#             */
/*   Updated: 2022/04/28 15:22:11 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putuns(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i += putint(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	return (i + 1);
}
