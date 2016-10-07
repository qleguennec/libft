/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_err.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 18:39:35 by qle-guen          #+#    #+#             */
/*   Updated: 2016/10/07 20:46:14 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../malloc.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

static void	put_size(size_t size)
{
	size_t	pow;
	char	c;

	pow = 1;
	while (pow < size)
		pow *= 10;
	pow /= 10;
	while (size)
	{
		c = size / pow;
		size -= pow * c;
		pow /= 10;
		c += '0';
		write(1, &c, 1);
	}
}

void		ft_malloc_err(size_t size)
{
	static const char	*malloc_err1 = "failed to allocate ";
	static const char	*malloc_err2 = " bytes\n";
	static const char	*malloc_err3 = "failed to allocate n > UINT_MAX bytes";

	if (size > UINT_MAX)
		write(2, malloc_err3, ft_strlen(malloc_err1));
	else
	{
		write(2, malloc_err1, ft_strlen(malloc_err1));
		put_size(size);
		write(2, malloc_err2, ft_strlen(malloc_err2));
	}
	exit(1);
}
