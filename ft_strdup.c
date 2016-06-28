/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:01:50 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/10 18:36:23 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char		*dup;

	dup = ft_strnew(ft_strlen(s));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}
