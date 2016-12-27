/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 13:19:18 by qle-guen          #+#    #+#             */
/*   Updated: 2016/12/26 18:52:45 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct		s_list
{
	void				*mem;
	size_t				size;
	struct s_list		*next;
}						t_list;

typedef int				(*t_cmp_f) (void *, void *);
typedef char			t_i8;
typedef unsigned char	t_u8;
typedef int				t_i32;
typedef unsigned int	t_u32;
typedef long			t_i64;
typedef unsigned long	t_u64;

#endif
