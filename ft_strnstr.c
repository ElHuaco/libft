/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:43:21 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/18 14:43:29 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	if (to_find[0])
	{
		i = 0;
		while (str[i] && i < n)
		{
			j = 0;
			if (str[i] == to_find[j])
			{
				while (to_find[j] && str[i + j] == to_find[j] && i + j < n)
					j++;
				if (j == (unsigned int)ft_strlen(to_find))
					return (&str[i]);
			}
			i++;
		}
		return (0);
	}
	else
		return (str);
}
