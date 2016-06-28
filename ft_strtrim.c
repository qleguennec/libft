/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:07:53 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/28 15:06:05 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strfind_generic
	(const char *str, int (*f) (int))
{
	char		*s;

	s = (char *)str;
	return (f(*s) ? 0 : 1 + ft_strfind_generic(s + 1, f));
}

static int	nospace
	(int c)
{
	return (!ft_isspace(c));
}

char		*ft_strtrim
	(char const *s)
{
	char	*result;
	char	*buffer;
	char	*rev;

	result = (char *)s;
	result += ft_strfind_generic(s, &nospace);
	rev = ft_strrev(result);
	if (!rev)
		return (NULL);
	buffer = rev;
	rev += ft_strfind_generic(rev, &nospace);
	result = ft_strrev(rev);
	ft_memdel((void **)&buffer);
	if (!result)
		return (NULL);
	return (result);
}
