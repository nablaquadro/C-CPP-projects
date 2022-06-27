/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:22:34 by aceremig          #+#    #+#             */
/*   Updated: 2022/01/31 16:30:58 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*substr;
	unsigned int	i;

	if (s == 0)
		return (0);
	if (ft_strlen(s) < start)
	{
		substr = malloc(1);
		substr[0] = 0;
		return (substr);
	}
	i = start;
	if (len > ft_strlen(s))
		len = (unsigned int)ft_strlen(s);
	substr = (char *)malloc(len + 1);
	if (substr == 0)
		return (0);
	while (s[i] != '\0' && (i - start) < len)
	{
		substr[i - start] = s[i];
		i++;
	}
	substr[i - start] = '\0';
	return (substr);
}
