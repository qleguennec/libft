/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:17:06 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/09 15:54:20 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	del((*alst)->data, (*alst)->size);
	ft_memdel((void**)alst);
}
