/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbuild.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 19:11:46 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/09 15:58:23 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static void	copy(t_list *l, void *s)
{
	while (l)
	{
		ft_memcpy(s, l->data, l->size);
		s += l->size;
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
		len += l->size;
		l = l->next;
	}
	if (!(s = malloc(len)))
		return (0);
	copy(alst, s);
	free(alst->data);
	ft_lstdel(&alst->next, &ft_delete);
	alst->data = s;
	alst->size = len;
	return (1);
}
