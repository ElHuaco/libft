/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:12 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/25 14:57:24 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*j;
	size_t	i;
	size_t	k;
	char	*cs1;
	char	*cs2;

	if (s1 && s2)
	{
		cs1 = (char *)s1;
		cs2 = (char *)s2;
		j = malloc(sizeof(char) * (ft_strlen(cs1) + ft_strlen(cs2) + 1));
		if (j == 0)
			return (0);
		i = -1;
		while (++i < ft_strlen(cs1))
			j[i] = *(cs1 + i);
		k = -1;
		while (++k < ft_strlen(cs2))
			j[i + k] = *(cs2 + k);
		j[i + k] = '\0';
		return (j);
	}
	else
		return (0);
}
