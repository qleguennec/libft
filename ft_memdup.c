/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 11:05:17 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/17 11:21:43 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memdup(void *p, size_t n)
{
	void	*ret;

	return ((ret = malloc(n)) ? ft_memcpy(ret, p, n) : NULL);
}
