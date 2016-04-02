/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbuild.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 19:11:46 by qle-guen          #+#    #+#             */
/*   Updated: 2016/04/02 19:42:58 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static void	copy(t_list *l, void *s)
{
	while (l)
	{
		ft_memcpy(s, l->content, l->content_size);
		s += l->content_size;
		l = l->next;
	}
}

int			ft_lstbuild(t_list *alst)
{
	size_t	len;
	t_list	*l;
	void	*s;

	if (!alst)
		return (0);
	len = 0;
	l = alst;
	while (l)
	{
		len += l->content_size;
		l = l->next;
	}
	if (!(s = malloc(len)))
		return (0);
	copy(l, s);
	free(alst->content);
	ft_lstdel(&alst->next, &ft_delete);
	alst->content = s;
	alst->content_size = len;
	return (1);
}
