/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:26:34 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:58:18 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strequ(char const *s1, char const *s2)
{
	return (ft_strnequ(
		s1,
		s2,
		ft_max(ft_strlen(s1), ft_strlen(s2))));
}
