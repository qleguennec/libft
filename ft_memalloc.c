/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:22:22 by qle-guen          #+#    #+#             */
/*   Updated: 2016/02/11 17:13:23 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*p;

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size);
	return (p);
}