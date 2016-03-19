/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:12:23 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 11:59:55 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
