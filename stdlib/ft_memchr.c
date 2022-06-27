/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:33:02 by aceremig          #+#    #+#             */
/*   Updated: 2022/01/13 16:51:25 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, int n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			break ;
	}
	if (i < n)
		return (s + i);
	else
		return (0);
}
