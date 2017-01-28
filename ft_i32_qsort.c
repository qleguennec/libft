/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i32_qsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 17:43:06 by qle-guen          #+#    #+#             */
/*   Updated: 2017/01/28 15:48:24 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_i32_qsort
	(t_i32 *t, size_t n, bool rev)
	
{
	size_t	i;
	size_t	j;
	t_i32	p;
	t_i32	tmp;

	if (n < 2)
		return ;
	p = t[n / 2];
	i = 0;
	j = n - 1;
	while (42)
	{
		while (rev ? p > t[i] : t[i] < p)
			i++;
		while (rev ? p < t[j] : t[j] > p)
			j--;
		if (i >= j)
			break ;
		tmp = t[i];
		t[i] = t[j];
		t[j--] = tmp;
		i++;
	}
	ft_i32_qsort(t, i, rev);
	ft_i32_qsort(t + i, n - i, rev);
}
