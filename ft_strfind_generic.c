/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind_generic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 11:43:49 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/23 11:48:39 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strfind_generic(const char *str, int (*f) (int))
{
	char		*s;

	s = (char *)str;
	return (f(*s) ? 0 : 1 + ft_strfind_generic(s + 1, f));
}
