/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:49:17 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 13:08:05 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void		ft_striteri_helper
	(char *s, unsigned int i, void (*f)(unsigned int, char*))
{
	if (*s)
	{
		f(i, s);
		ft_striteri_helper(s + 1, i + 1, f);
	}
}

void			ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	ft_striteri_helper(s, 0, f);
}
