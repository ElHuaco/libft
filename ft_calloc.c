/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:27:24 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/18 14:21:40 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void			*buff;
	unsigned int	i;

	buff = malloc(size * count);
	if (buff == 0)
		return (0);
	i = 0;
	while (i < size * count)
	{
		*((char *)buff + i) = '\0';
		i++;
	}
	return (buff);
}
