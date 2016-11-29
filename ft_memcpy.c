/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:00:20 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/29 00:56:30 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

#define INC(x)	d += x; s += x;

static void	memcpy_carry(unsigned char *d, unsigned char *s, size_t n)
{
	if (n & 16)
	{
		*(unsigned long *)(d + 0) = *(unsigned long *)(s + 0);
		*(unsigned long *)(d + 8) = *(unsigned long *)(s + 8);
		INC(16);
	}
	if (n & 8)
	{
		*(unsigned long *)(d + 0) = *(unsigned long *)(s + 0);
		INC(8);
	}
	if (n & 4)
	{
		*(unsigned int *)(d + 0) = *(unsigned int *)(s + 0);
		INC(4);
	}
	if (n & 2)
	{
		*d++ = *s++;
		*d++ = *s++;
	}
	if (n & 1)
		*d++ = *s++;
}

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && (uintptr_t)d % 4)
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
		INC(32);
		n -= 32;
	}
	if (n)
		memcpy_carry(d, s, n);
	return (dest);
}
