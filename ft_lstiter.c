/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:31:22 by qle-guen          #+#    #+#             */
/*   Updated: 2015/11/30 11:35:24 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	if (lst)
	{
		f(lst);
		ft_lstiter(lst->next, f);
	}
}