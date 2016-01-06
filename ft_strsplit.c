/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:05:17 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 13:12:43 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_wordcount(char const *s, char c)
{
	int		count;
	int		search;

	count = 0;
	search = 0;
	while (*s)
	{
		if (*s == c)
		{
			search = 0;
			s++;
		}
		else if (!search)
		{
			count++;
			search = 1;
			s++;
		}
		else
			s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		search;
	int		i;
	char	**t;

	search = 0;
	i = 0;
	t = (char **)ft_memalloc(sizeof(char **) * (ft_wordcount(s, c) + 1));
	if (!t)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			search = 0;
		else if (!search)
		{
			t[i] = ft_strsub(s, 0, ft_strfind(s, c));
			if (!t[i++])
				return (NULL);
			s += ft_strfind(s, c) - 1;
		}
		s++;
	}
	return (t);
}
