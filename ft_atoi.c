/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:21:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:35:04 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digitlen(char *s)
{
	if (!*s || !ft_isdigit(*s))
		return (0);
	else
		return (1 + digitlen(s + 1));
}

int				ft_atoi(const char *str)
{
	int		n;
	int		neg;
	char	*s;

	s = (char *)str;
	n = 0;
	neg = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		neg = (*s == '-');
		s++;
	}
	while (*s && digitlen(s) > 0)
	{
		n += ((*s) - '0') * ft_pow(10, digitlen(s + 1));
		s++;
	}
	if (neg)
		n = n * (-1);
	return (n);
}
