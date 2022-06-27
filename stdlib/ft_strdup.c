/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:43:13 by aceremig          #+#    #+#             */
/*   Updated: 2022/01/14 15:34:05 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*strcpy;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	strcpy = malloc(sizeof(char) * i + 1);
	if (strcpy == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		strcpy[i] = s1[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
