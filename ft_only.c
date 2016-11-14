/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:59:13 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/14 17:06:28 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_only(void *p1, size_t n1, void *p2, size_t n2)
{
	unsigned char	*s;

	s = (unsigned char *)p1;
	while (n1)
	{
		if (!ft_memchr(p2, (int)*s, n2))
			return (0);
		p1++;
		n1--;
	}
	return (1);
}
