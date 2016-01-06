/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrange.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:58:17 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:47:50 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list			*ft_lstrange(int a, int b)
{
	t_list		*l;

	if (a >= b)
		return (NULL);
	else
	{
		l = ft_lstnew(&a, sizeof(int));
		if (!l)
			return (NULL);
		l->next = ft_lstrange(a + 1, b);
		return (l);
	}
}
