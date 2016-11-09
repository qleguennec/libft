/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 17:54:13 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 19:12:22 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

# include <stdlib.h>

# define MALLOC_F			malloc
# define MALLOC_ERR(x)		ft_malloc_err(x, __FUNCTION__, __FILE__, __LINE__)

# define MALLOC(p, x)		if (!(p = MALLOC_F(x))) MALLOC_ERR(x)
# define MALLOC_N(p, n)		MALLOC(p, sizeof(*p) * n)
# define MALLOC_SIZEOF(p)	MALLOC_N(p, 1)

void						*ft_null(size_t size);
void						ft_malloc_err
	(size_t size, const char *func, const char *file, int line);

#endif
