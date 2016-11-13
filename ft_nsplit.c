/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:10:12 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/13 16:49:50 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "malloc.h"

static unsigned char
	*next_word(void **p, size_t *n1, void *match, size_t n2)
{
	unsigned char	*r;
	unsigned char	**s;

	s = (unsigned char **)p;
	while (*n1 && ft_memchr(match, (int)**s, n2))
	{
		(*n1)--;
		(*s)++;
	}
	r = *s;
	while (*n1 && !ft_memchr(match, (int)**s, n2))
	{
		(*n1)--;
		(*s)++;
	}
	return (r == *s ? NULL : r);
}

unsigned char
	**ft_nsplit(void *s, size_t n1, void *match, size_t n2)
{
	size_t			count;
	size_t			n;
	unsigned char	**ret;
	unsigned char	*buf;
	void			*s1;

	count = 0;
	s1 = s;
	n = n1;
	while (next_word(&s1, &n, match, n2))
		count++;
	MALLOC_N(ret, (count + 1));
	while ((buf = next_word(&s, &n1, match, n2)))
	{
		MALLOC(*ret, ((unsigned char *)s - buf + 1));
		ft_memcpy(*ret, buf, (unsigned char *)s - buf);
		(*ret)[(unsigned char *)s - buf] = '\0';
		ret++;
	}
	*ret = NULL;
	return (ret - count);
}
