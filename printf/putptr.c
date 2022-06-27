/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:22:00 by aceremig          #+#    #+#             */
/*   Updated: 2022/04/28 15:22:01 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putptraux(unsigned long nbr, char *base)
{
	unsigned long	baselen;
	int				i;

	baselen = 16;
	i = 0;
	if (nbr >= baselen)
	{
		i += putptraux(nbr / baselen, "0123456789abcdef");
		putptraux(nbr % baselen, "0123456789abcdef");
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	return (i + 1);
}

int	putptr( unsigned long nbr)
{
	if (nbr == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	return (2 + putptraux (nbr, "0123456789abcdef"));
}
