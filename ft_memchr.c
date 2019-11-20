/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:19:10 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/18 14:23:13 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (*((char *)str + i) == c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
