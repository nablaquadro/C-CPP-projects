/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:33:07 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/17 16:36:14 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char s, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*t_str;

	if (!s1)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && char_in_set(s1[start], set))
		start++;
	while (end > start && char_in_set(s1[end - 1], set))
		end--;
	t_str = (char *) malloc(sizeof (char) * (end - start + 1));
	if (t_str == NULL)
		return (NULL);
	while (start < end)
		t_str[i++] = s1[start++];
	t_str[i] = 0;
	return (t_str);
}
