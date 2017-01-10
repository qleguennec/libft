/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 13:19:18 by qle-guen          #+#    #+#             */
/*   Updated: 2017/01/10 17:08:00 by qle-guen         ###   ########.fr       */
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
#  define T_U32_V2_ECHO
#  define T_V2

typedef struct			s_u32_v2
{
	t_u32				x;
	t_u32				y;
}						t_u32_v2;
# endif

# ifdef T_U32_V4
#  define T_U32_V4_ECHO
#  define T_V4

typedef struct			s_u32_v4
{
	t_u32				a;
	t_u32				b;
	t_u32				c;
	t_u32				d;
}						t_u32_v4;

#  define V4L(x) ((x).a)
#  define V4U(x) ((x).b)
#  define V4R(x) ((x).c)
#  define V4D(x) ((x).d)

# endif

# ifdef T_V2

#  define V2(t, a, b) ((t##_v2){a, b})
#  define SUM2(t, a, b) V2(t, (a).x+(b).x, (a).y+(b).y)
#  define DIFF2(t, a, b) V2(t, (a).x-(b).x, (a).y-(b).y)
#  define EQ2(a, b) ((a).x == (b).x && (a).y == (b).y)
#  define ABS2(t, a) (V2(t, ABS((a).x), ABS((a).y)))
#  define DOT2(t, a, b) V2(t, (a).x*(b).x, (a).y*(b).y)
# endif

# ifdef T_V4

#  define V4(t, a, b, c, d) ((t##_v4){a, b, c, d})
#  define SUM4(t, x, y) V4(t,(x).a+(y).a,(x).b+(y).b,(x).c+(y).c,(x).d+(y).d)
#  define DIFF4(t, x, y) V4(t,(x).a-(y).a,(x).b-(y).b,(x).c-(y).c,(x).d-(y).d)
#  define DOT4(t, x, y) V4(t,(x).a*(y).a,(x).b*(y).b,(x).c*(y).c,(x).d*(y).d)
# endif

#endif
