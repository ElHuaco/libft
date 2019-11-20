/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:40:42 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/18 14:41:02 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_strnlen(char *str, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (str[i] && i < n)
		i++;
	return (i);
}

unsigned int			ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strnlen(dest, size);
	srclen = ft_strlen(src);
	if (destlen == size)
		return (size + srclen);
	if (size - destlen > srclen)
		ft_memcpy(dest + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + destlen, src, size - destlen - 1);
		dest[size - 1] = '\0';
	}
	return (destlen + srclen);
}
