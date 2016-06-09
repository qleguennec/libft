/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 09:26:40 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/09 15:56:00 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstpush(t_list **alst, void *data, size_t size)
{
	t_list		*l;

	l = *alst;
	if (l)
	{
		if (l->next)
			ft_lstpush(&l->next, data, size);
		else
			l->next = ft_lstnew(data, size);
	}
	else
		*alst = ft_lstnew(data, size);
}
