/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:27:58 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:56:59 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strcmp(char const *s1, char const *s2)
{
	return (ft_strncmp(
		s1
		, s2
		, ft_max(ft_strlen(s1), ft_strlen(s2))));
}
