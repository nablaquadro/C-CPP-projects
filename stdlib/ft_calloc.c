/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:48:21 by aceremig          #+#    #+#             */
/*   Updated: 2022/01/13 16:50:10 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void			*mem;
	unsigned int	i;

	i = 0;
	mem = malloc(count * size);
	if (mem == 0)
		return (0);
	while (i < count * size)
	{
		*((char *)(mem + i)) = 0;
		i++;
	}
	return (mem);
}
