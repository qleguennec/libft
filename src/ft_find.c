/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 23:44:12 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/24 23:47:34 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_find
	(char *str, void *fst, void *lst, size_t size)
{
	void	*n;
	int		cmp;

	if (ft_strcmp(str, fst) < 0 || ft_strcmp(str, lst) > 0)
		return (NULL);
	if (fst == lst)
		return (!ft_strcmp(str, fst) ? fst : NULL);
	if (fst == lst - size)
	{
		cmp = ft_strcmp(str, (char *)fst);
		if (!cmp)
			return (fst);
		if (cmp > 0)
			return (!ft_strcmp(str, lst) ? lst : NULL);
		else
			return (NULL);
	}
	n = fst + size * ((lst - fst) / size / 2);
	cmp = ft_strcmp(str, n);
	if (!cmp)
		return (n);
	if (cmp > 0)
		return (ft_find(str, n, lst, size));
	else
		return (ft_find(str, fst, n, size));
}

