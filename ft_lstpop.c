/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:58:44 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/10 18:01:14 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpop(t_list **l)
{
	t_list	*ret;

	if (!*l)
		return (NULL);
	ret = *l;
	*l = (*l)->next;
	return (ret);
}