/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memoffset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:02:41 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:53:09 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_memoffset(const void *s, unsigned int offset)
{
	unsigned int	i;

	i = 0;
	while (i < offset)
	{
		i++;
		s++;
	}
}
