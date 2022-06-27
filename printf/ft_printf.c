/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:21:20 by aceremig          #+#    #+#             */
/*   Updated: 2022/04/28 15:21:20 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_arg(char c, int *len, va_list args)
{
	if (c == 'c')
	{
		ft_putchar((char)va_arg(args, int));
		*len = *len + 1;
	}
	else if (c == 's')
		*len += putstr(va_arg(args, char *));
	else if (c == 'p')
		*len += putptr((unsigned long)va_arg(args, void *));
	else if (c == 'd')
		*len += putint(va_arg(args, int));
	else if (c == 'i')
		*len += putint(va_arg(args, int));
	else if (c == 'u')
		*len += putuns(va_arg(args, unsigned int));
	else if (c == 'x')
		*len += putx(va_arg(args, unsigned int));
	else if (c == 'X')
		*len += puthex(va_arg(args, unsigned int));
	if (c == '%')
	{
		ft_putchar('%');
		*len = *len + 1;
	}
}

int	ft_printf(const char *fm, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, fm);
	while (*fm)
	{
		if (*fm == '%')
		{
			ft_print_arg(*(fm + 1), &len, args);
			fm += 2;
		}
		else
		{
			write(1, fm, 1);
			fm++;
			len++;
		}
	}
	va_end(args);
	return (len);
}
