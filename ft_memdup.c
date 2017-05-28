/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 11:05:17 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/28 21:28:33 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memdup(void *p, size_t n)
{
	void	*ret;

	ret = malloc(n);
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, p, n);
	return (ret);
}
