/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:22:22 by qle-guen          #+#    #+#             */
/*   Updated: 2016/10/07 20:02:30 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../malloc.h"

void		*ft_memalloc(size_t size)
{
	void	*p;

	MALLOC(p, size);
	ft_bzero(p, size);
	return (p);
}
