/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 08:37:53 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:46:41 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	l = (t_list*)ft_memalloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->next = NULL;
	if (!content)
	{
		l->content = NULL;
		l->content_size = 0;
		return (l);
	}
	if (content_size > 0)
	{
		l->content = ft_memalloc(content_size);
		ft_memcpy(l->content, content, content_size);
	}
	l->content_size = content_size;
	return (l);
}
