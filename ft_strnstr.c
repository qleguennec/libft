/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:46:06 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/28 15:17:31 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char			*s;
	unsigned int	len;
	unsigned int	i;

	s = (char *)s1;
	len = ft_strlen(s2);
	i = 0;
	if (!*s2)
		return (s);
	if (!n)
		return (NULL);
	while (i + len < n && *s && ft_memcmp(s, s2, len))
	{
		i++;
		s++;
	}
	return (ft_memcmp(s, s2, len) ? NULL : s);
}
