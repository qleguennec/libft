/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:33:46 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/10 19:27:29 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstfree(t_list *l)
{
	t_list	*n;

	if (!l)
		return ;
	free(l->mem);
	n = l->next;
	free(l);
	ft_lstfree(n);
}
