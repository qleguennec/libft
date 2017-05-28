/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 13:30:39 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/28 20:59:27 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_atoi
	(char *s
	, unsigned long *n
	, int base
	, int ucase)
{
	char	low;

	low = ucase ? 'A' : 'a';
	while ((((*s >= '0' && *s < '0' + ft_min(base, 10)))
		&& (base <= 10 || ((*s >= low && *s < low + base - 9)))))
	{
		*n = (*n * base) + (*s - (ft_isdigit(*s) ? '0' : low - 10));
		s++;
	}
	return (s);
}
