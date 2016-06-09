/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:43:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/09 15:58:01 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_lstcmp(t_list *a, t_list *b)
{
	int		r;

	r = a->data - b->data;
	if (a && b)
	{
		if (r)
			return (r);
		return (ft_lstcmp(a->next, b->next));
	}
	else
		return (r);
}
