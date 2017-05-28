/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:00:20 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/28 21:04:59 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

static void
	inc
	(unsigned char **d
		, unsigned char **s
		, size_t n)
{
	(*d) += n;
	(*s) += n;
}

static void	memcpy_carry(unsigned char *d, unsigned char *s, size_t n)
{
	if (n & 16)
	{
		*(unsigned long *)(d + 0) = *(unsigned long *)(s + 0);
		*(unsigned long *)(d + 8) = *(unsigned long *)(s + 8);
		inc(&d, &s, 16);
	}
	if (n & 8)
	{
		*(unsigned long *)d = *(unsigned long *)s;
		inc(&d, &s, 8);
	}
	if (n & 4)
	{
		*(unsigned int *)d = *(unsigned int *)s;
		inc(&d, &s, 4);
	}
	if (n & 2)
	{
		*(unsigned short *)d = *(unsigned short *)s;
		inc(&d, &s, 2);
	}
	if (n & 1)
		*d = *s;
}

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && (uintptr_t)d % 8)
	{
		*d++ = *s++;
		n--;
	}
	while (n >= 32)
	{
		*(unsigned long *)(d + 0) = *(unsigned long *)(s + 0);
		*(unsigned long *)(d + 8) = *(unsigned long *)(s + 8);
		*(unsigned long *)(d + 16) = *(unsigned long *)(s + 16);
		*(unsigned long *)(d + 24) = *(unsigned long *)(s + 24);
		inc(&d, &s, 32);
		n -= 32;
	}
	memcpy_carry(d, s, n);
	return (dest);
}
