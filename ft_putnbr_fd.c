/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:48:09 by qle-guen          #+#    #+#             */
/*   Updated: 2016/01/14 16:51:11 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48, fd);
		return ;
	}
	ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + 48, fd);
	return ;
}
