/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:31:55 by qle-guen          #+#    #+#             */
/*   Updated: 2016/12/26 13:24:42 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "malloc.h"

void		ft_lstadd(t_list **l, void *mem, size_t size)
{
	t_list	*new;

	MALLOC1_ZERO(new);
	new->next = *l;
	new->size = size;
	new->mem = mem;
	*l = new;
}
