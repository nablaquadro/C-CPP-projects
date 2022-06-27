/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:21:28 by aceremig          #+#    #+#             */
/*   Updated: 2022/04/28 15:21:29 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char	*fm, ...);
int		putint(int nb);
int		putuns(unsigned int nb);
int		putstr(char *str);
void	ft_putchar(char c);
int		putptr( unsigned long nbr);
int		putx(size_t nbr);
int		puthex(size_t nbr);

#endif