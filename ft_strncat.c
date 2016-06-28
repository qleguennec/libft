/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:01:16 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/04 07:20:15 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*end;

	end = ft_strend(dest);
	ft_strncpy(end, src, n);
	*(end + n) = '\0';
	return (dest);
}
