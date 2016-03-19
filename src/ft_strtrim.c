/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:07:53 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/23 12:41:29 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	nospace(int c)
{
	return (!ft_isspace(c));
}

char		*ft_strtrim(char const *s)
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
	ft_strdel(&buffer);
	if (!result)
		return (NULL);
	return (result);
}
