/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfoldl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 08:41:01 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:51:29 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_lstfoldl(void *(*f) (void *, void *), void *b, t_list *l)
{
	if (!l)
		return (b);
	else
		return (ft_lstfoldl(f, f(b, l->content), l->next));
}
