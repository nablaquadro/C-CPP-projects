/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:31:17 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/17 16:36:39 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	int		i;
	char	*p_dst;
	char	*p_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	p_dst = (char *) dst;
	p_src = (char *) src;
	if (dst >= src)
	{
		i = (int) n;
		while (i--)
			p_dst[i] = p_src[i];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
