/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strunichr_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:27:09 by aleon-ca          #+#    #+#             */
/*   Updated: 2020/02/03 12:27:38 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strunichr(int len, int c)
{
	int		i;
	char	result[len];

	result[len] = '\0';
	i = -1;
	while (++i < len)
		result[i] = c;
	return (result);
}
