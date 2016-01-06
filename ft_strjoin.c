/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:48:07 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:59:01 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, s1);
	ft_strcat(s, s2);
	return (s);
}
