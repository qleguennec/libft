/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 08:37:53 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/09 15:55:32 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *data, size_t size)
{
	t_list	*l;

	if (!(l = ft_memalloc(sizeof(*l))))
		return (NULL);
	if (size > 0)
	{
		l->data = ft_memalloc(size);
		if (l->data)
		{
			if (data)
				ft_memcpy(l->data, data, size);
		}
		else
			return (NULL);
	}
	l->size = size;
	return (l);
}
