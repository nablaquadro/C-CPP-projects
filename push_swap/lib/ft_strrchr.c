/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:33:02 by aceremig          #+#    #+#             */
/*   Updated: 2022/05/17 16:36:15 by aceremig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ris;

	ris = (char *) s + ft_strlen(s);
	while (*ris != (unsigned char) c)
	{
		if (s == ris)
			return (NULL);
		ris--;
	}
	return (ris);
}
