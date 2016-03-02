/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 08:37:53 by qle-guen          #+#    #+#             */
/*   Updated: 2016/03/02 23:07:49 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	if (!(l = ft_memalloc(sizeof(*l))))
		return (NULL);
	if (content_size > 0)
	{
		l->content = ft_memalloc(content_size);
		if (l->content)
		{
			if (content)
				ft_memcpy(l->content, content, content_size);
		}
		else
			return (NULL);
	}
	l->content_size = content_size;
	return (l);
}
