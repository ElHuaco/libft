/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleon-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:49:23 by aleon-ca          #+#    #+#             */
/*   Updated: 2019/11/20 09:45:02 by aleon-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_check(char const *s, char *sub, unsigned int start, int n)
{
	int i;

	i = -1;
	while (++i < n)
		sub[i] = s[start + i];
	return (sub);
}

static	char	*ft_first(char const *s, char *sub, unsigned int start, int n)
{
	sub = ft_check(s, sub, start, n - start + 1);
	sub[n - start + 1] = '\0';
	return (sub);
}

static	char	*ft_other(char const *s, char *sub, unsigned int start, int len)
{
	sub = ft_check(s, sub, start, len);
	sub[len] = '\0';
	return (sub);
}

char			*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*sub;

	if (s && (start > (unsigned int)ft_strlen((char *)s) || len == 0))
	{
		sub = malloc(sizeof(char) * 1);
		if (sub == 0)
			return (0);
		sub[0] = '\0';
	}
	else if (s && (start + len > (unsigned int)ft_strlen((char *)s)))
	{
		sub = malloc(sizeof(char) * (ft_strlen((char *)s) - start + 2));
		if (sub == 0)
			return (0);
		sub = ft_first(s, sub, start, ft_strlen((char *)s));
	}
	else
	{
		sub = malloc(sizeof(char) * (len + 1));
		if (sub == 0 || s == 0)
			return (0);
		sub = ft_other(s, sub, start, len);
	}
	return (sub);
}
