/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:32:15 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/17 16:36:28 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(const char *src)
{
	int		len;
	char	*cpy;

	len = ft_strlen(src) + 1;
	cpy = (char *) malloc(sizeof (char) * len);
	if (cpy == NULL)
		return (NULL);
	ft_strcpy(cpy, (char *) src);
	return (cpy);
}
