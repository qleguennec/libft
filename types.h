/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 13:19:18 by qle-guen          #+#    #+#             */
/*   Updated: 2017/01/09 16:14:24 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct			s_list
{
	void				*mem;
	size_t				size;
	struct s_list		*next;
}						t_list;

typedef int				(*t_cmp_f) (void *, void *);
typedef unsigned char	t_u8;
typedef char			t_i8;
typedef unsigned int	t_u32;
typedef int				t_i32;
typedef unsigned long	t_u64;
typedef long			t_i64;

# ifdef T_U32_V2

typedef struct			s_u32_v2
{
	t_u32				x;
	t_u32				y;
}						t_u32_v2;
# endif

#endif
