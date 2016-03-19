/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:30:15 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/06 13:09:42 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
