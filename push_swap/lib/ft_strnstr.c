/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:32:56 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/17 16:36:17 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	i = 0;
	while ((i < len) && (haystack[i] != '\0'))
	{
		j = 0;
		while (needle[j] == haystack[i + j] && len > j + i)
		{
			if (needle[j + 1] == '\0')
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
