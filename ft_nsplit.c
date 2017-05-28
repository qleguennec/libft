/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:10:12 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/28 21:25:03 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

unsigned char	**ft_nsplit(void *s, size_t n1, void *match, size_t n2)
{
	size_t			count;
	size_t			n;
	unsigned char	**ret;
	unsigned char	*buf;
	void			*s1;

	count = 0;
	s1 = s;
	n = n1;
	while (ft_word(&s1, &n, match, n2))
		count++;
	ret = malloc(sizeof(*ret) * (count + 1));
	if (ret == NULL)
		return (NULL);
	while ((buf = ft_word(&s, &n1, match, n2)))
	{
		*ret = malloc(((unsigned char *)s - buf + 1));
		if (*ret == NULL)
			return (NULL);
		ft_memcpy(*ret, buf, (unsigned char *)s - buf);
		(*ret)[(unsigned char *)s - buf] = '\0';
		ret++;
	}
	*ret = NULL;
	return (ret - count);
}
