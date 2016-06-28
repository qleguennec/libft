/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 16:52:09 by qle-guen          #+#    #+#             */
/*   Updated: 2016/02/11 19:01:22 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	if (p)
		return (ft_mempcpy(dest, src, p - src + 1));
	ft_memcpy(dest, src, n);
	return (NULL);
}
