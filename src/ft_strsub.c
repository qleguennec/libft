/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:57:46 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/04 12:53:09 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	s += start;
	if (ft_strlen(s) == len)
		return (ft_strdup(s));
	s1 = ft_strnew(len);
	if (s1 == NULL)
		return (NULL);
	ft_strncpy(s1, s, len);
	return (s1);
}
