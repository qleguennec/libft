/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbuild.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 16:30:42 by qle-guen          #+#    #+#             */
/*   Updated: 2016/03/30 16:38:23 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void		*ft_lstbuild(t_list *l)
{
	int		len;
	t_list	*head;
	void	*ret;

	len = 0;
	head = l;
	while (l)
	{
		len += l->content_size;
		l = l->next;
	}
	if (!(ret = malloc(len)))
		return (NULL);
	l = head;
	while (l)
	{
		ret = ft_mempcpy(ret, l->content, l->content_size);
		l = l->next;
	}
	return (ret);
}
