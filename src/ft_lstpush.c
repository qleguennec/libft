/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 09:26:40 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/29 09:31:23 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstpush(t_list **alst, void *content, size_t content_size)
{
	t_list		*l;

	l = *alst;
	if (l)
	{
		if (l->next)
			ft_lstpush(&l->next, content, content_size);
		else
			l->next = ft_lstnew(content, content_size);
	}
	else
		*alst = ft_lstnew(content, content_size);
}
