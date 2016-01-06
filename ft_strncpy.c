/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 15:41:43 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/31 04:09:24 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*p;
	size_t			copied;

	d = (unsigned char *)dest;
	p = (unsigned char *)ft_memccpy(dest, src, '\0', n);
	copied = p - d;
	if (p && n > copied)
		ft_bzero(p, n - copied);
	return (dest);
}
