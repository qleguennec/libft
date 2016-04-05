/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 23:41:35 by qle-guen          #+#    #+#             */
/*   Updated: 2016/04/05 23:54:33 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
