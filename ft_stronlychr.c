/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stronlychr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:49:05 by aleon-ca          #+#    #+#             */
/*   Updated: 2020/02/03 15:12:51 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int		ft_stronlychr(char *str, ...)
{
	va_list		ptr;
	char		c;
	char		*copy;
	char		*temp;
	int			i;

	if (!str)
		return (0);
	va_start(ptr, str);
	copy = malloc(sizeof(char) * 1);
	*copy = 0;
	while ((c = va_arg(ptr, int)))
	{
		temp = ft_strjoin(ft_strunichr(1, c), copy);
		free(copy);
		copy = temp;
	}
	i = -1;
	while (str[i++])
	{
		if (!(ft_strchr(copy, str[i])))
			return (0);
	}
	va_end(ptr);
	return (1);
}
