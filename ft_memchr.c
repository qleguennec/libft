/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:45:27 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/31 01:56:00 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	c = (unsigned char)c;
	if (n)
	{
		if (*p == c)
			return (p);
		else
			return (ft_memchr(s + 1, (int)c, n - 1));
	}
	return (NULL);
}
