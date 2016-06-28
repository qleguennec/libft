/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:24:49 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/04 08:12:05 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t		len;
	int			n;

	len = 0;
	while (len < dstsize && dest[len])
		len++;
	n = dstsize - len - 1;
	if (n > 0)
	{
		ft_strncpy(dest + len, src, n);
		dest[dstsize - 1] = '\0';
	}
	return (len + ft_strlen(src));
}
