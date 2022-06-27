/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:59:27 by aceremig          #+#    #+#             */
/*   Updated: 2022/01/31 15:14:47 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr((char *)set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr((char *)set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
