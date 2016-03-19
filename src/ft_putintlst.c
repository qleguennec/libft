/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:00:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:57:18 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_putintlst(t_list *t)
{
	t_list	*n;

	n = t;
	ft_putstr("[");
	while (n)
	{
		ft_putnbr((*((int*)n->content)));
		if (n->next)
			ft_putstr(", ");
		else
			ft_putstr("]");
		n = n->next;
	}
	ft_putchar('\n');
}
