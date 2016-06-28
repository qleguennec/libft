/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:24:29 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/28 14:53:44 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned long	ft_pow
	(unsigned long a, unsigned long n)
{
	if (n == 0)
		return (1);
	else
		return (a * ft_pow(a, n - 1));
}
