/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbuild.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 16:30:42 by qle-guen          #+#    #+#             */
/*   Updated: 2016/03/30 16:44:10 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		*ft_lstbuild(t_list *l)
{
	t_list	*head;
	t_vect	*ret;
	void	*buf;

	if (!(ret = ft_memalloc(sizeof(*ret))))
		return (NULL);
	head = l;
	while (l)
	{
		ret->size += l->content_size;
		l = l->next;
	}
	if (!(ret->content = malloc(ret->size)))
		return (NULL);
	l = head;
	buf = ret->content;
	while (l)
	{
		buf = ft_mempcpy(ret->content, l->content, ret->size);
		l = l->next;
	}
	return (ret);
}
