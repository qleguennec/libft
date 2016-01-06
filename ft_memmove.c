/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:37:28 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/24 06:04:17 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer;

	buffer = ft_memalloc(n);
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, buffer, n);
	ft_strdel(&buffer);
	return (dest);
}
