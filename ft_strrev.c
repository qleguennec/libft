/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:41:04 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/04 06:50:01 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrev(const char *s)
{
	int		len;
	char	*s1;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_strnew(len);
	len--;
	if (s1 == NULL)
		return (NULL);
	while (len >= 0)
		s1[len--] = s[i++];
	return (s1);
}
