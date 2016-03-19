/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:17:06 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:44:14 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void**)alst);
}
