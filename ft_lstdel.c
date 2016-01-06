/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:28:15 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/23 14:09:07 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*buf;

	if (*alst)
	{
		buf = (*alst)->next;
		ft_lstdelone(alst, del);
		ft_lstdel(&buf, del);
	}
}
