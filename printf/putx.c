/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:22:16 by aceremig          #+#    #+#             */
/*   Updated: 2022/04/28 15:22:17 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putxaux(size_t nbr, char *base)
{
	size_t	baselen;
	int		i;

	baselen = 16;
	i = 0;
	if (nbr >= baselen)
	{
		i += putxaux(nbr / baselen, base);
		putxaux(nbr % baselen, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	return (i + 1);
}

int	putx(size_t nbr)
{
	return (putxaux (nbr, "0123456789abcdef"));
}
