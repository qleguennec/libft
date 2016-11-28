/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:21:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/28 18:49:20 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *s)
{
	int		n;
	int		neg;

	n = 0;
	while (ft_isspace(*s))
		s++;
	neg = *s == '-';
	if (*s == '-' || *s == '+')
		s++;
	while (ft_isdigit(*s))
		n = 10 * n - (*s++ - '0');
	return (neg ? n : - n);
}
