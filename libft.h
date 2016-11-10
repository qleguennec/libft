/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:28:07 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/10 18:00:28 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <wchar.h>

# define COMPARE(a, b)	(((a) > (b)) - ((a) < (b)))
# define MIN(a,b)		((a <= b) ? a : b)
# define MAX(a,b)		((a >= b) ? a : b)
# define LEN(x)			(sizeof(x) / sizeof(x[0]))
# define NEG(x)			((x < 0) ? 1 : 0)
# define SIGN(x)		((x < 0) ? - 1 : 1)
# define ABS(x)			((x < 0) ? - x : x)
# define BZERO(t, x)	t x; ft_bzero(&x, sizeof(x))

# define FIND(s, a)		ft_find(s, a, &(a[LEN(a) - 1]), sizeof(*a))

typedef struct		s_list
{
	void			*mem;
	size_t			size;
	struct s_list	*next;
}					t_list;

typedef int			(*t_cmp_f) (void *, void *);

char				*ft_itoa(int n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s);
char				*ft_strend(char const *s1);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char const *s);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strtrim(char const *s);
int					ft_atoi(const char *s);
int					ft_bytecmp(const void *p, unsigned char c, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_tolower(int i);
int					ft_toupper(int i);
size_t				ft_strfind(const char *s, char c);
size_t				ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);
size_t				ft_wstrlen(const wchar_t *s);
t_list				*ft_lstpop(t_list **l);
unsigned long		ft_pow(unsigned long a, unsigned long n);
void				*ft_find(char *str, void *fst, void *lst, size_t size);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memdup(void *p, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memnchr(const void *s, int c, size_t n);
void				*ft_mempcpy(void *dest, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				ft_lstadd(t_list **l, void *mem, size_t size);
void				ft_lstdel(t_list *l);
void				ft_memdel(void **ap);
void				ft_qsort(void **t, size_t n, t_cmp_f cmp, int rev);

#endif
