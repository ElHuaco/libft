/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:54:23 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/18 14:23:04 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		if (*((char *)src + i) == (char)c)
			return ((char *)dest + i + 1);
	}
	return (0);
}
