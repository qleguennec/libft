/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:10:12 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/10 23:45:08 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "malloc.h"

static char		*next_word(char **s, size_t *n, int (*f)(int))
{
	char		*r;

	while (*n && f(**s))
	{
		(*n)--;
		(*s)++;
	}
	r = *s;
	while (*n && !f(**s))
	{
		(*n)--;
		(*s)++;
	}
	return (r == *s ? NULL : r);
}

char			**ft_nsplit(char *s, size_t n, int (*f)(int))
{
	size_t		count;
	size_t		n1;
	char		**ret;
	char		*buf;
	char		*s1;

	count = 0;
	s1 = s;
	n1 = n;
	while (next_word(&s1, &n1, f))
		count++;
	MALLOC(ret, sizeof(*ret) * (count + 1));
	while ((buf = next_word(&s, &n, f)))
	{
		MALLOC(*ret, s - buf + 1);
		ft_memcpy(*ret, buf, s - buf);
		(*ret)[s - buf] = '\0';
		ret++;
	}
	*ret = NULL;
	return (ret - count);
}
