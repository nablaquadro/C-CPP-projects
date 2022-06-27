/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:21:49 by aceremig          #+#    #+#             */
/*   Updated: 2022/04/28 15:21:49 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthexaux(size_t nbr, char *base)
{
	size_t	baselen;
	int		i;

	baselen = 16;
	i = 0;
	if (nbr >= baselen)
	{
		i += puthexaux(nbr / baselen, base);
		puthexaux(nbr % baselen, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	return (i + 1);
}

int	puthex(size_t nbr)
{
	return (puthexaux(nbr, "0123456789ABCDEF"));
}
