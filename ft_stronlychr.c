/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stronlychr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:49:05 by aleon-ca          #+#    #+#             */
/*   Updated: 2020/02/03 12:49:13 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int		ft_stronlychr(char *str, ...)
{
	va_list		ptr;
	int			i;

	if (!str)
		return (0);
	va_start(ptr, str);
	while ((ptr = va_arg(ptr, char)))
	{
		i = -1;
		while (str[i++])
		{
			if (str[i] != *ptr)
				return (0);
		}
	}
	va_end(ptr);
	return (1);
}
