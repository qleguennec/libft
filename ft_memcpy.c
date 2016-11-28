/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:00:20 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/28 19:26:38 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

static void	memcpy_carry(unsigned char *d, unsigned char *s, size_t n)
{
	if (n & 8)
	{
		*(unsigned int *)(d + 0) = *(unsigned int *)(s + 0);
		*(unsigned int *)(d + 4) = *(unsigned int *)(s + 4);
		d += 8;
		s += 8;
	}
	if (n & 4)
	{
		*(unsigned int *)(d + 0) = *(unsigned int *)(s + 0);
		d += 4;
		s += 4;
	}
	if (n & 2)
	{
		*d++ = *s++;
		*d++ = *s++;
	}
	if (n & 1)
		*d++ = *s++;
}

static void	memcpy_aligned(unsigned char *d, unsigned char *s, size_t n)
{
	while (n >= 16)
	{
		*(unsigned int *)(d + 0) = *(unsigned int *)(s + 0);
		*(unsigned int *)(d + 4) = *(unsigned int *)(s + 4);
		*(unsigned int *)(d + 8) = *(unsigned int *)(s + 8);
		*(unsigned int *)(d + 12) = *(unsigned int *)(s + 12);
		s += 16;
		d += 16;
		n -= 16;
	}
	memcpy_carry(d, s, n);
}

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while ((uintptr_t)s % 4 && n)
	{
		*d++ = *s++;
		n--;
	}
	if (!((uintptr_t)d % 4))
	{
		memcpy_aligned(d, s, n);
		return (dest);
	}
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
