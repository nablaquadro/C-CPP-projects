/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:18:12 by aceremig          #+#    #+#             */
/*   Updated: 2022/01/31 15:49:10 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wcount(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if ((s[i] != c && i == 0)
			|| (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			len++;
		i++;
	}
	return (len);
}

static void	wput(char const *s, char c, char **str)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		k = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			k++;
		}
		str[j++] = ft_substr(s, i - k, k);
		while (s[i] && s[i] == c)
			i++;
	}
	str[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		num;

	if (!s)
		return (NULL);
	i = 0;
	num = wcount(s, c);
	str = (char **)malloc(sizeof(char *) * (wcount(s, c) + 1));
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = 0;
	else
		wput(s, c, str);
	return (str);
}
