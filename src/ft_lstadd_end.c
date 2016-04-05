/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 17:27:29 by qle-guen          #+#    #+#             */
/*   Updated: 2016/04/05 21:37:50 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*l;

	l = *alst;
	if (!l)
		*alst = new;
	else if (!l->next)
		l->next = new;
	else
		ft_lstadd_end(&l->next, new);
	return (*alst);
}
